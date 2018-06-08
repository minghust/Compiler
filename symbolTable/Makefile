parser: scanner.l parser.y grammarTree.cpp table.cpp
	bison -d -v parser.y
	flex scanner.l
	g++ grammarTree.cpp table.cpp parser.tab.c -lfl -ly -o parser

.PHONY: clean
clean:
	rm parser parser.tab.c parser.tab.h lex.yy.c parser.output
