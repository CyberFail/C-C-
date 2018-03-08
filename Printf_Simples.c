#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int o = 0;
    char nome[255] = " ";
    int i = 0;
    do{

    printf("*** Menu ***\n");
    printf(" 1 - Print seu nome\n");
    printf(" 2 - Print sua idade\n");
    printf(" 0 - Sair\n");


    printf("Digite sua opção: ");
    scanf("%d", &o);

    switch(o){
        case 0:
            printf("Saindo...\n");
            printf("clear");
        break;

        case 1:
            printf("Digite seu nome: \n");
            scanf("%s", nome);
            printf("Bem vindo %s \n", nome);
        break;

        case 2:
            printf("Digite sua idade: \n");
            scanf("%d", &i);
            printf("Sua idade é:  %d \n", i);
        break;
    }


    }while(o);

}