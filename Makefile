
hello: main.o confuzzle.o
	gcc -g -Wall -o hello main.o confuzzle.o

main.o: main.c confuzzle.h
	gcc -g -c -Wall main.c

confuzzle.o: confuzzle.h confuzzle.c
	gcc -g -c -Wall confuzzle.c

