#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int o = 0;
    char nome[255] = " ";
    char letra = ' ';
    int idade = 0;
    float dinheiro = 0.00;
    do{
    //Menu
    printf("*** Menu ***\n");
    printf(" 1 - Print seu nome(String)\n");
    printf(" 2 - Print sua idade(Int)\n");
    printf(" 3 - Print dinheiro que possui(Float)\n");
    printf(" 4 - Print letra do alfabeto(Char)\n");
    printf(" 0 - Sair\n");

    //Pegando as opcoes de menu
    printf("Digite sua opção: ");
    scanf("%d", &o);

    switch(o){
        case 0:
            //Saindo do programa
            printf("Saindo...\n");
            printf("clear");
        break;

        case 1:
            //Printando STRING
            printf("Digite seu nome: \n");
            scanf("%s", nome);
            printf("Bem vindo %s \n", nome);
        break;

        case 2:
            //printando INT
            printf("Digite sua idade: \n");
            scanf("%d", &idade);
            printf("Sua idade é:  %d \n", idade);
        break;

        case 3:
            //printando FLOAT
            printf("Quantos reais você tem ?\n");
            scanf("%f", &dinheiro);
            printf("Você possui %.2f\n", dinheiro);
        break;

        case 4:
            //printando CHAR
            printf("Digite uma letra do alfabeto: \n");
            scanf(" %c", &letra);
            printf("A letra que você escolheu foi: %c\n", letra);

        break;
    }


    }while(o);

    system("PAUSE");
}