all: main.e

main.e: main.o funcao.o
	gcc -o main.e main.o funcao.o

main.o: main.c prototipo.h
	gcc -o main.o -c main.c

funcao.o: funcao.c
	gcc -o funcao.o -c funcao.c

clean:
	rm -f *.o main.e
