main: main.o encrypt.o
	gcc main.o encrypt.o -o encrypt

main.c: main.c encrypt.h
	gcc -c main.c

encrypt.o: encrypt.c encrypt.h
	gcc -c encrypt.c