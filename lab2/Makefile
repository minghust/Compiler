parser: scanner.l parser.y table.cpp
	bison -d -v parser.y
	flex scanner.l
	g++ table.cpp parser.tab.c -lfl -ly -o parser

.PHONY: clean
clean:
	rm parser parser.tab.c parser.tab.h lex.yy.c parser.output
