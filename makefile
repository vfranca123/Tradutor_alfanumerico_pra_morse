all:funcoes.o
	gcc -g funcoes.o main.c -o main

funcoes.o: lista_de_funcoes.h
	gcc -c -g funcoes.c