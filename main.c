#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"lista_de_funcoes.h"


int main(){
    
    //criação do array pra pesquisa
    letra caracteres[39];
    caracteres[0].caractere ='e';
    strcpy(caracteres[0].codigo ,".");      //strcpy(A->codigo, ".-");

    caracteres[1].caractere ='i';
    strcpy(caracteres[1].codigo ,"..");

    caracteres[2].caractere ='s';
    strcpy(caracteres[2].codigo ,"...");

    caracteres[3].caractere ='h';
    strcpy(caracteres[3].codigo ,"....");

    caracteres[4].caractere ='5';
    strcpy(caracteres[4].codigo ,".....");

    caracteres[5].caractere ='4';
    strcpy(caracteres[5].codigo ,"....-");

    caracteres[6].caractere ='v';
    strcpy(caracteres[6].codigo ,"...-");

    caracteres[7].caractere ='3';
    strcpy(caracteres[7].codigo ,"...--");

    caracteres[8].caractere ='u';
    strcpy(caracteres[8].codigo ,"..-");

    caracteres[9].caractere ='f';
    strcpy(caracteres[9].codigo ,"..-.");

    caracteres[10].caractere ='2';
    strcpy(caracteres[10].codigo ,"..---");

    caracteres[11].caractere ='a';
    strcpy(caracteres[11].codigo ,".-");

    caracteres[12].caractere ='r';
    strcpy(caracteres[12].codigo ,".-.");

    caracteres[13].caractere ='l';
    strcpy(caracteres[13].codigo ,".-..");

    caracteres[14].caractere ='w';
    strcpy(caracteres[14].codigo ,".--");

    caracteres[15].caractere ='p';
    strcpy(caracteres[15].codigo ,".--.");

    caracteres[16].caractere ='j';
    strcpy(caracteres[16].codigo ,".---");

     caracteres[17].caractere ='1';
    strcpy(caracteres[17].codigo ,".----");

     caracteres[18].caractere ='t';
    strcpy(caracteres[18].codigo ,"-");
    
     caracteres[19].caractere ='n';
    strcpy(caracteres[19].codigo ,"-.");

     caracteres[20].caractere ='d';
    strcpy(caracteres[20].codigo ,"-..");

     caracteres[21].caractere ='b';
    strcpy(caracteres[21].codigo ,"-...");

    caracteres[22].caractere ='6';
    strcpy(caracteres[22].codigo ,"-....");

    caracteres[23].caractere ='x';
    strcpy(caracteres[23].codigo ,"-..-");

    caracteres[24].caractere ='k';
    strcpy(caracteres[24].codigo ,"-.-");

    caracteres[25].caractere ='c';
    strcpy(caracteres[25].codigo ,"-.-.");

    caracteres[26].caractere ='y';
    strcpy(caracteres[26].codigo ,"-.--");

    caracteres[27].caractere ='m';
    strcpy(caracteres[27].codigo ,"--");

    caracteres[28].caractere ='g';
    strcpy(caracteres[28].codigo ,"--.");

    caracteres[29].caractere ='z';
    strcpy(caracteres[29].codigo ,"---..");

    caracteres[30].caractere ='q';
    strcpy(caracteres[30].codigo ,"--.-");

    caracteres[31].caractere ='8';
    strcpy(caracteres[31].codigo ,"---..");

    caracteres[32].caractere ='9';
    strcpy(caracteres[32].codigo ,"----.");

    caracteres[33].caractere ='0';
    strcpy(caracteres[33].codigo ,"-----");

    caracteres[34].caractere ='o';
    strcpy(caracteres[34].codigo ,"---");

    caracteres[35].caractere =' ';
    strcpy(caracteres[35].codigo ," / ");

    caracteres[36].caractere ='z';
    strcpy(caracteres[36].codigo ,"---..");

    caracteres[37].caractere ='z';
    strcpy(caracteres[37].codigo ,"---..");

    caracteres[38].caractere =' ';
    strcpy(caracteres[38].codigo ,"/");

    
    //-----declarar o primeiro arquivo----------------
    FILE *arquivo;
    arquivo = fopen("morse.txt","r");
    if(arquivo == NULL){
        printf("arquivo não aberto\n");
    }
    //---------------------------

    //-------declarar o segundo arquivo-------
    FILE *arquivo2;
    arquivo2= fopen("alpha.txt","r");
    if(arquivo2== NULL){
        printf("arquivo não aberto \n");
    }
    //------------------------------
    
    No *raiz=cria_arvore();
    int controlador ;

    while(1){
        printf("____________________________________________");
        printf("\n");
        printf("OPERACOES :\n");
        printf("\n");
        printf(" 0 - para acabar o programa\n");
        printf(" 1 - para traduzir de Morse para alfanumerico \n");
        printf(" 2 - Para printar a arvore por completo \n");
        printf(" 3 - Para ler do arquivo txt em morse e passar para alfanumerico \n");
        printf(" 4 - Para escrever em alfanumerico e passar para morse  \n");
        printf(" 5 - Para ler o arquivo em alfanumerico e  passado para morse  \n");
        printf("____________________________________________");
        printf("\n");
        scanf("%d",&controlador);
        setbuf(stdin, NULL);

        if(controlador == 1){
            char s[1000];
            printf("escreva a frase em codigo Morse \n");
            printf("coloque um espaço antes de terminar a mensagem\n");
            fgets(s,1000,stdin);
            printf("\n");
            traduz_Palavras(raiz,s);
            printf("\n");
        }
        if(controlador ==2 ){
            print_arvore(raiz);
        }
        if(controlador == 3){
            char str[1000];
            fgets(str,1000,arquivo);
            printf("Em Morse: %s\n",str);
            printf("Em alfhanumerico: ");
            traduz_Palavras(raiz,str);
            printf("\n");
            
        }
        if(controlador == 4){
            
            char str[500];
            printf("escreva a frase em alfanumerico \n");
            fgets(str,500,stdin);
            printf("\n");
            int i = 0;
            
            while(str[i]){
                
                traduz_pra_morse(caracteres,str[i]);

                i++;
            }
            printf("\n");
            
        }
        if(controlador == 5){
            printf("\n");
            char str[1000];
            fgets(str,1000,arquivo2);

            printf("frase escrita:  %s",str);
            printf("\n");
            
            int i;
            printf("em Morse:  ");
            while(str[i]){
                
                traduz_pra_morse(caracteres,str[i]);

                i++;
            }
            printf("\n");
            

        }
        if(controlador == 0) break;
    }
    
    fclose(arquivo2);
    fclose(arquivo);
    free_arvore(raiz);
}