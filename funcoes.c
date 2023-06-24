#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista_de_funcoes.h"

No *cria_arvore(){
//declarção das letras -------------
No  *start=(No*)malloc(sizeof(No)) 
    ,*A=(No*)malloc(sizeof(No))
    ,*B=(No*)malloc(sizeof(No))
    ,*C=(No*)malloc(sizeof(No))
    ,*D=(No*)malloc(sizeof(No))
    ,*E=(No*)malloc(sizeof(No))
    ,*F=(No*)malloc(sizeof(No))
    ,*G=(No*)malloc(sizeof(No))
    ,*H=(No*)malloc(sizeof(No))
    ,*I=(No*)malloc(sizeof(No))
    ,*J=(No*)malloc(sizeof(No))
    ,*K=(No*)malloc(sizeof(No))
    ,*L=(No*)malloc(sizeof(No))
    ,*M=(No*)malloc(sizeof(No))
    ,*N=(No*)malloc(sizeof(No))
    ,*O=(No*)malloc(sizeof(No))
    ,*P=(No*)malloc(sizeof(No))
    ,*Q=(No*)malloc(sizeof(No))
    ,*R=(No*)malloc(sizeof(No))
    ,*S=(No*)malloc(sizeof(No))
    ,*T=(No*)malloc(sizeof(No))
    ,*U=(No*)malloc(sizeof(No))
    ,*V=(No*)malloc(sizeof(No))
    ,*W=(No*)malloc(sizeof(No))
    ,*X=(No*)malloc(sizeof(No))
    ,*Y=(No*)malloc(sizeof(No))
    ,*Z=(No*)malloc(sizeof(No));

//declarção dos numeros e a "gaveta"--------
No *zero=(No*)malloc(sizeof(No))
    ,*um=(No*)malloc(sizeof(No))
    ,*dois=(No*)malloc(sizeof(No))
    ,*tres=(No*)malloc(sizeof(No))
    ,*quatro=(No*)malloc(sizeof(No))
    ,*cinco=(No*)malloc(sizeof(No))
    ,*seis=(No*)malloc(sizeof(No))
    ,*sete=(No*)malloc(sizeof(No))
    ,*oito=(No*)malloc(sizeof(No))
    ,*nove=(No*)malloc(sizeof(No))
    ,*gaveta=(No*)malloc(sizeof(No));


start->letra = ' ';
strcpy(start->codigo, "/");
start->esquerda = E;
start->direita = T;

//esquerda da arvore ------------------------------------------------------------------------

//letras 
E->letra = 'e';
strcpy(E->codigo, ".");
E->esquerda = I;
E->direita = A;


A->letra = 'a';
strcpy(A->codigo, ".-");
A->esquerda = R;
A->direita = W;

R->letra = 'r';
strcpy(R->codigo, ".-.");
R->esquerda = L;
R->direita = NULL;

L->letra='l';
strcpy(L->codigo, ".-..");
L->esquerda=NULL;
L->direita=NULL;


W->letra = 'w';
strcpy(W->codigo, ".--");
W->esquerda = P;
W->direita = J;

P->letra = 'p';
strcpy(P->codigo, ".--.");
P->esquerda = NULL;
P->direita = NULL;

J->letra = 'j';
strcpy(J->codigo, ".---");
J->esquerda = NULL;
J->direita = um;

I->letra = 'i';
strcpy(I->codigo, "..");
I->esquerda = S;
I->direita = U;

U->letra = 'u';
strcpy(U->codigo, "..-");
U->esquerda =F;
U->direita = dois;

F->letra='f';
strcpy(F->codigo, "..-.");
F->esquerda=NULL;
F->direita=NULL;


S->letra = 's';
strcpy(S->codigo, "...");
S->esquerda = H;
S->direita = V;

H->letra = 'h';
strcpy(H->codigo, "....");
H->esquerda = cinco ;
H->direita = quatro;

V->letra = 'v';
strcpy(V->codigo, "...-");
V->esquerda = NULL;
V->direita =tres;

um->letra = '1';
strcpy(um->codigo, ".----");
um->esquerda = NULL;
um->direita = NULL;

dois->letra = '2';
strcpy(dois->codigo, "..---");
dois->esquerda = NULL;
dois->direita = NULL;

tres->letra = '3';
strcpy(tres->codigo, "...--");
tres->esquerda =NULL;
tres->direita = NULL;

quatro->letra = '4';
strcpy(quatro->codigo, "....-");
quatro->esquerda = NULL;
quatro-> direita = NULL;

cinco->letra = '5';
strcpy(cinco->codigo, ".....");
cinco->esquerda = NULL;
cinco->direita = NULL;



//lado direito da arvore ------------------------------------------------------------------------
T->letra='t';
strcpy(T->codigo, "-");
T->esquerda=N;
T->direita=M;

N->letra='n';
strcpy(N->codigo, "-.");
N->esquerda=D ;
N->direita=K;

K->letra='k';
strcpy(K->codigo, "-.-");
K->esquerda=C;
K->direita=Y;

C->letra='c';
strcpy(C->codigo, "-.-.");
C->esquerda=NULL;
C->direita=NULL;

Y->letra='y';
strcpy(Y->codigo, "-.--");
Y->esquerda=  NULL;
Y->direita= NULL;

D->letra='d';
strcpy(D->codigo, "-..");
D->esquerda=B;
D->direita=X;

X->letra='x';
strcpy(X->codigo, "-..-");
X->esquerda= NULL;
X->direita= NULL;

B->letra='b';
strcpy(B->codigo, "-...");
B->esquerda=seis;
B->direita=NULL;

seis->letra='6';
strcpy(seis->codigo, "-....");
seis->esquerda=NULL;
seis->direita=NULL;

M->letra='m';
strcpy(M->codigo, "--");
M->esquerda=G;
M->direita=O;

G->letra='g';
strcpy(G->codigo, "--.");
G->esquerda=Z;
G->direita=Q;

Z->letra='z';
strcpy(Z->codigo, "---..");
Z->esquerda=sete;
Z->direita=NULL;

Q->letra='q';
strcpy( Q->codigo, "--.-");
Q->esquerda=NULL;
Q->direita=NULL;

O->letra='o';
strcpy(O->codigo, "---");
Q->esquerda=oito;
Q->direita=gaveta;

oito->letra='8';
strcpy(oito->codigo, "---..");
oito->esquerda=NULL;
oito->direita=NULL;

gaveta->esquerda=nove;
gaveta->direita=zero;

nove->letra='9';
strcpy(nove->codigo, "----.");
nove->esquerda=NULL;
nove->direita=NULL;

zero->letra='0';
strcpy(zero->codigo, "-----");
zero->esquerda=NULL;
zero->direita=NULL;

return start;
}


void free_arvore(No *raiz){
        if(raiz){
            
            free_arvore(raiz->esquerda);
            free_arvore(raiz->direita);
            free(raiz);
            
        }
        
}

void traduz_letra(No *raiz,char x[10]){ 
    int teste;
    
    if(raiz){
    
    teste = strcmp(raiz->codigo,x); 
        if(teste == 0){
            printf("%c",raiz->letra);
        }
        
        else{
            for(int i = 0;i<10;i++){
                int teste2;
                
                if(x[i] == '.'){
                    raiz = raiz->esquerda;
                    
                    teste2 = strcmp(raiz->codigo,x);
                    if(teste2 == 0){
                        printf("%c",raiz->letra);
                        break;
                    }        
                
                } 

                if(x[i] =='-'){
                    raiz = raiz->direita;

                    teste2 = strcmp(raiz->codigo,x);
                    if(teste2 == 0){
                        printf("%c",raiz->letra);
                        break;
                    } 
                }
            }
        }
    
    }else return;
}

void print_arvore(No *raiz){
   if(raiz){
    printf("codigo correspondete [%s] ao caracter:%c\n",raiz->codigo,raiz->letra);    
    print_arvore(raiz->esquerda);
    print_arvore(raiz->direita);
   }
}

void traduz_Palavras(No *raiz,char *string) { 

    char *token;

    // Usando a função strtok() para separar as palavras
    token = strtok(string, " ");
    
    while (token != NULL) {
        if(token == "\n") printf("\n");
        traduz_letra(raiz,token);
        token = strtok(NULL, " ");
    }
}
void traduz_pra_morse(letra *vetor,char x){
    for(int i = 0;i < 39;i++){
        if(vetor[i].caractere == x ){
            printf("%s ",vetor[i].codigo);
            break;
        }
    }
}

    


    

