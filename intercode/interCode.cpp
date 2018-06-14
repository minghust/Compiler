//
// Created by MingZhang on 2018-06-12
//

#include"interCode.h"

vector<InterCode>interList;

void insertInterCode(InterCode icode)
{
    interList.push_back(icode);
}

void printOperand(Operand &p)
{
    switch(p.kind)
    {
        case VARIABLE:
            cout << p.name << " ";
            break;
        case CONSTANT:
            if(p.name == "CONSTANT_STR")
                cout << "#" << p.string_value << " ";
            else if(p.name == "CONSTANT_INT")
                cout << "#" << p.int_value << " ";
            else if(p.name == "CONSTANT_FLOAT")
                cout << "#" << p.float_value << " ";
            break;
        case LABEL:
            cout << "label" << p.var_no << " ";
            break;
        case FUNCTION_:
            cout << p.name << " ";
            break;
        case CLASS_:
            cout << p.name << " ";
    }
}

void printInterCode(void)
{
    cout << endl << endl;
    cout << ">>>>>>>>>>>>>>>>>>>>>> Inter Code <<<<<<<<<<<<<<<<<<<" << endl;
    InterCode p;
    for(int i=0;i<interList.size();i++){
        p = interList[i];
        switch(p.kind){
            case ASSIGN:
                printOperand(p.assign_op.left);
                cout << ":= ";
                printOperand(p.assign_op.right);
                break;
            case ADD:
                printOperand(p.binary_op.result);
                cout << ":= ";
                printOperand(p.binary_op.op1);
                cout << "+ ";
                printOperand(p.binary_op.op2);
                break;
            case SUB:
                printOperand(p.binary_op.result);
                cout << ":= ";
                printOperand(p.binary_op.op1);
                cout << "- ";
                printOperand(p.binary_op.op2);
                break;
            case MUL:
                printOperand(p.binary_op.result);
                cout << ":= ";
                printOperand(p.binary_op.op1);
                cout << "* ";
                printOperand(p.binary_op.op2);
                break;
            case DIV:
                printOperand(p.binary_op.result);
                cout << ":= ";
                printOperand(p.binary_op.op1);
                cout << "/ ";
                printOperand(p.binary_op.op2);
                break;
            case RETURN:
                cout << "RETURN ";
                printOperand(p.single_op.op);
                break;
            case LABEL:
                cout << "LABEL ";
                printOperand(p.single_op.op);
                cout << ": ";
                break;
            case GOTO:
                cout << "GOTO ";
                printOperand(p.single_op.op);
                break;
            case IFGOTO:
                cout << "IF ";
                printOperand(p.tribasic_op.x);
                cout << p.tribasic_op.op;
                cout << " ";
                printOperand(p.tribasic_op.y);
                cout << "GOTO ";
                printOperand(p.tribasic_op.label);
                break;
            case CALL:
                printOperand(p.assign_op.left);
                cout << ":= CALL ";
                printOperand(p.assign_op.right);
                break;
            case ARG:
                cout << "ARG ";
                printOperand(p.single_op.op);
                break;
            case FUNCTION:
                cout << "FUNCTION ";
                printOperand(p.single_op.op);
                cout << ": ";
                break;
            case PARAM:
                cout << "PARAMETER ";
                printOperand(p.single_op.op);
                break;
            case CLASS:
                cout << "CLASS ";
                printOperand(p.single_op.op);
                break;
        }
        cout << endl;
    }
}

void traverseTree(Node *root) {
    if(root)
    {
        if(root->name == "ClassDef") 
        {
            Operand classop;
            classop.kind = CLASS_;
            classop.name = root->left->right->__string;

            InterCode icode;
            icode.kind = CLASS;
            icode.single_op.op = classop;
            insertInterCode(icode);
        }
        else if(root->name == "FunctionDef")
        {
            InterCode icode;
            icode.kind = FUNCTION;

            Operand functionop;
            functionop.kind = FUNCTION_;
            functionop.name = root->left->right->__string;

            icode.single_op.op = functionop;
            insertInterCode(icode);

            Operand paraop;
            paraop.kind = VARIABLE;

            Node *para_point = root->left->right->right->right->left;
            while(para_point)
            {
                if(!para_point->left->right) // only one parameter
                {
                    paraop.name = para_point->left->left->right->__string;
                    icode.kind = PARAM;
                    icode.single_op.op = paraop;
                    insertInterCode(icode);
                    break;
                }
                else
                {
                    paraop.name = para_point->left->right->right->left->right->__string;
                    para_point = para_point->left;
                    icode.kind = PARAM;
                    icode.single_op.op = paraop;
                    insertInterCode(icode);
                }
            }
        }
        else if(root->name == "SimpleStmt")
        {
            Node *expr = root->left->right->right;
            InterCode icode;
            icode.kind = ASSIGN;

            Operand leftop, rightop;
            leftop.kind = VARIABLE;
            leftop.name = root->left->left->__string;
            icode.assign_op.left = leftop;

            if(expr->left->name == "Constant")
            {
                rightop.kind = CONSTANT;

                if(expr->left->left->name == "CONSTANT_STRING" || expr->left->left->name == "CONSTANT_BOOL" || expr->left->left->name == "CONSTANT_NULL") 
                {
                    rightop.name = "CONSTANT_STR";
                    rightop.string_value = expr->left->left->__string;
                }
                else if(expr->left->left->name == "CONSTANT_INT_D" || expr->left->left->name == "CONSTANT_IND_H") 
                {
                    rightop.name = "CONSTANT_INT";
                    rightop.int_value = expr->left->left->__int;
                }
                else if(expr->left->left->name == "CONSTANT_FLOAT" || expr->left->left->name == "CONSTANT_FLOAT_SC")
                {
                    rightop.name = "CONSTANT_FLOAT";
                    rightop.float_value = expr->left->left->__float;
                }
                icode.assign_op.right = rightop;
                insertInterCode(icode);
            }
            else if(expr->left->name == "LValue")
            {
                rightop.kind = VARIABLE;
                rightop.name = expr->left->left->__string;
                
                icode.assign_op.right = rightop;
                insertInterCode(icode);
            }
            else if(expr->left->name == "Call") 
            {
                icode.kind = CALL;
                rightop.kind = FUNCTION_;
                rightop.name = expr->left->left->__string;
                
                icode.assign_op.right = rightop;
                insertInterCode(icode);
            }
            else if(root->left->right->right->left->right->name == "+")
            {
                icode.kind = ADD;
                Node *expr1 = root->left->right->right->left->left->left;
                Node *expr2 = root->left->right->right->left->right->right->left->left;

                Operand r1, r2;
                r1.kind = VARIABLE;
                r2.kind = VARIABLE;
                r1.name = expr1->__string;
                r2.name = expr1->__string;

                icode.binary_op.result = leftop;
                icode.binary_op.op1 = r1;
                icode.binary_op.op2 = r2;

                insertInterCode(icode);
            }
            else if(root->left->right->right->left->right->name == "-")
            {
                icode.kind = SUB;
                Node *expr1 = root->left->right->right->left->left->left;
                Node *expr2 = root->left->right->right->left->right->right->left->left;

                Operand r1, r2;
                r1.kind = VARIABLE;
                r2.kind = VARIABLE;
                r1.name = expr1->__string;
                r2.name = expr1->__string;

                icode.binary_op.result = leftop;
                icode.binary_op.op1 = r1;
                icode.binary_op.op2 = r2;

                insertInterCode(icode);
            }
            else if(root->left->right->right->left->right->name == "*")
            {
                icode.kind = MUL;
                Node *expr1 = root->left->right->right->left->left->left;
                Node *expr2 = root->left->right->right->left->right->right->left->left;

                Operand r1, r2;
                r1.kind = VARIABLE;
                r2.kind = VARIABLE;
                r1.name = expr1->__string;
                r2.name = expr1->__string;

                icode.binary_op.result = leftop;
                icode.binary_op.op1 = r1;
                icode.binary_op.op2 = r2;

                insertInterCode(icode);
            }
            else if(root->left->right->right->left->right->name == "/")
            {
                icode.kind = DIV;
                Node *expr1 = root->left->right->right->left->left->left;
                Node *expr2 = root->left->right->right->left->right->right->left->left;

                Operand r1, r2;
                r1.kind = VARIABLE;
                r2.kind = VARIABLE;
                r1.name = expr1->__string;
                r2.name = expr1->__string;

                icode.binary_op.result = leftop;
                icode.binary_op.op1 = r1;
                icode.binary_op.op2 = r2;

                insertInterCode(icode);
            }
        }
        // else if(root->name == "Actuals") // args not null
        // {
        //     InterCode icode;
        //     icode.kind = ARG;
        //     Operand argop;
        //     argop.kind = VARIABLE;

        //     Node *args = root->left;
        //     while(args)
        //     {
        //         if(args->left->right)
        //         {   

        //             argop.name = args->left->right->right->left->left->__string;
                    
        //             args = args->left;
        //         }
        //         else 
        //         {

        //         }
        //     }
        // }
        else if(root->name == "ReturnStmt")
        {
            InterCode icode;
            icode.kind = RETURN;
            Operand returnop;
            returnop.kind = VARIABLE;

            if(root->left->right)
            {
                returnop.name = root->left->right->left->left->__string;
            }
            else 
            {
                returnop.name = "";
            }
            icode.single_op.op = returnop;
            insertInterCode(icode);
        }
        traverseTree(root->left);
        traverseTree(root->right);
    }
}