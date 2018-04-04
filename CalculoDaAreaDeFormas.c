#include <stdio.h>
#include <stdlib.h>

int main (void){
    float a = 0,
          b = 0,
          soma = 0;

    int o = 0;
    do{
        //Menu
        printf("**************** Menu ****************\n");
        printf(" 1 - Calcular área do retangulo\n");
        printf(" 2 - Calcular área do triangulo\n");
        printf(" 3 - Calcular área do circulo\n");
        printf(" 0 - Sair \n\n");

        printf("Escolha uma das opções: ");
        scanf("%d", &o);
        switch(o){
           
            case 1:
                printf("Vamos calcular a área do retangulo!\n");
                printf("Digite a altura do retangulo: \n");
                scanf("%f", &a);
                printf("Digite a largura do retangulo: \n");
                scanf("%f", &b);

                //Calculando a area do retangulo!!

                soma = a*b;

                //Mostrando o resultado retangulo

                printf("O valor da area do retangulo é: %.2f\n", soma);

            break;

            case 2:
                printf("Vamos calcular a area do triangulo!\n");
                printf("Digite o valor da altura do triangulo: \n");
                scanf("%f", &a);
                printf("Digite o valor da largura do triangulo: \n\n");
                scanf("%f", &b);
                printf("\n");

                //Calculando a area do triangulo!!
                soma = (a * b) / 2;

                //Monstrando o resultado do triangulo
                printf("O valor da area do triangulo é: %.2f\n", soma);

            break;
            
            case 3:
                printf("Vamos calcular a area do circulo!\n");
                printf("Digite o valor do raio do circulo\n");
                scanf("%f", &a);
                printf("\n");

                //Calculando a area do circulo!!
                soma = a * 3.14;

                //Mostrando o resultado do circulo
                printf("O valor da area do circulo é: %.2f\n", soma);

            break;
        }

    }while(o);
}