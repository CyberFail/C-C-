#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int o;
    do{

    printf("*** Menu ***\n");
    printf(" 1 - Print seu nome\n");
    printf(" 2 - Print sua idade");
    printf(" 0 - Sair\n");


    printf("Digite sua opção: ");
    scanf("%d", o);

    switch(o){
        case 0:
            printf("Saindo...");
            print("clear")
        break;

        case 1:
            char nome;
            printf("Digite seu nome: \n");
            scanf("%c", nome);
            printf("Bem vindo" + nome);
        break;

        case 2:
            int i;
            printf("Digite sua idade: \n");
            scanf("%d", i);
        break;
    }


    }while(o);

}