all: main.e

main.e: main.o funcoes.o
	gcc -o main.e main.o funcoes.o

main.o: main.c prototipos.h
	gcc -o main.o -c main.c

funcao.o: funcoes.c
	gcc -o funcoes.o -c funcoes.c

clean:
	rm -f *.o main.e
