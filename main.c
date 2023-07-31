#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char numero[20];
} contatos;

int main (){
    contatos pessoa[10];
    int i = 0, x = 0;
    int opcao, opcao2, opcao3;

    while (i == 0)
    {
        printf ("\nDigite 1 para encerrar o programa!\n");
        printf ("Digite 2 para adicionar um contato!\n");
        printf ("Digite 3 para listar contatos!\n");
        printf ("Digite 4 para excluir contatos!\n");
        printf ("Digite 5 para atualizar contatos!\n");
        scanf ("%d", &opcao);
        getchar ();
        if (opcao == 1){
            i = 1;
            break;
        }
        else if (opcao == 2){
            printf ("digite o nome do contato:");
            fgets (pessoa[x].nome, 50, stdin);
            printf ("digite o numero do contato:");
            fgets (pessoa[x].numero, 20, stdin);
            x+=1;
        }
        else if(opcao == 3){
            if(x != 0){
                printf("\n***Contatos***\n");
                for(int l = 0; l<x; l++){
                    if(strcmp(pessoa[l].nome,"") == 0){
                        break;
                    }
                    else{
                        printf("\nContato %d\n", l);
                        printf("\nnome: %s", pessoa[l].nome);
                        printf("numero: %s\n", pessoa[l].numero);
                        printf("\n--------------------------\n");
                    }
                }
            }
            else{
                printf("Nao existe contatos!");
            }
        }
        else if(opcao == 4){
            for(int l = 0; l<x; l++){
                printf("\nContato %d\n", l);
                printf("\nnome: %s", pessoa[l].nome);
                printf("numero: %s\n", pessoa[l].numero);
                printf("\n--------------------------\n");
            }
            printf("Digite o numero do contato para excluir:");
            scanf("%d", &opcao2);
            for(int l = 0; l<x; l++){
                if(opcao2 == l){
                    strcpy(pessoa[l].nome,pessoa[l+1].nome);
                    strcpy(pessoa[l].numero,pessoa[l+1].numero);
                }
            }
        }
        else if(opcao == 5){
            if(x != 0){
                printf("\n***Contatos***\n");
                for(int l = 0; l<x; l++){
                    if(strcmp(pessoa[l].nome,"") == 0){
                        break;
                    }
                    else{
                        printf("\nContato %d\n", l);
                        printf("\nnome: %s", pessoa[l].nome);
                        printf("numero: %s\n", pessoa[l].numero);
                        printf("\n--------------------------\n");
                    }
                }
            }
            printf("Digite o numero do contato para atualizar:");
            scanf("%d", &opcao3);
            getchar();

            for(int l = 0; l<x; l++){
                if(opcao3 == l){
                    printf ("digite o nome do contato:");
                    fgets (pessoa[l].nome, 50, stdin);
                    printf ("digite o numero do contato:");
                    fgets (pessoa[l].numero, 20, stdin);
                }
            }
        }
    }
}
