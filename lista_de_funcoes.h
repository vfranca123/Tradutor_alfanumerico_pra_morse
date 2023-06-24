#include<stdio.h>
#include<stdlib.h>

#ifndef _lista_de_funcoes_h
#define _lista_de_funcoes_h

typedef struct No {
    
    char letra;
    char codigo[10];
    struct No *esquerda ,*direita;
   

}No;

typedef struct letra{
    
    char codigo[10];
    char caractere;

}letra;

No *cria_arvore();
void free_arvore(No *raiz);
void traduz_letra(No *raiz,char x[10]);
void print_arvore(No *raiz);
void traduz_Palavras(No *raiz,char *string);
void traduz_pra_morse(letra *vetor,char x);

#endif