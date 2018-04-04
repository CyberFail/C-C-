#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void){
    int op;
    float a = 0,
          b = 0,
          resultado = 0;
    do{
        printf("*****_MENU_*****\n");
        printf(" 1 - Somar\n");
        printf(" 4 - Subtrair\n");
        printf(" 4 - Multiplicar\n"); 
        printf(" 4 - Dividir\n");
        printf(" 0 - Sair\n");

        printf("Selecione uma das operações matemáticas: ");
        scanf("%d", &op);

        switch(op){
        
            case 1:
                //Iniciando com uma frase indicativa ao usuario
                printf("Digite os numeros que deseja soma!\n");

                //Pegando os valores do usuario
                printf("Digite o primeiro numero: \n");
                scanf("%f", &a);
                printf("Digite o segundo numero: \n");
                scanf("%f", &b);

                //Somando
                resultado = a + b;

                //Mostrando resultado
                printf("A soma dos valores é: %2.f \n", resultado);
            break;

            case 2:
                 //Iniciando com uma frase indicativa ao usuario
                printf("Digite os numeros que deseja subtrair!\n");

                //Pegando os valores do usuario
                printf("Digite o primeiro numero: \n");
                scanf("%f", &a);
                printf("Digite o segundo numero: \n");
                scanf("%f", &b);

                //Subtraindo
                resultado = a - b;

                //Mostrando resultado
                printf("A subtração dos valores é: %2.f \n", resultado);
            break;

            case 3:
                //Iniciando com uma frase indicativa ao usuario
                printf("Digite os numeros que deseja multiplicar!\n");

                //Pegando os valores do usuario
                printf("Digite o primeiro numero: \n");
                scanf("%f", &a);
                printf("Digite o segundo numero: \n");
                scanf("%f", &b);

                //Multiplicando
                resultado = a * b;

                //Mostrando resultado
                printf("A multiplicação dos valores é: %2.f \n", resultado);
            break;

            case 4:
                //Iniciando com uma frase indicativa ao usuario
                printf("Digite os numeros que deseja dividir!\n");

                //Pegando os valores do usuario
                printf("Digite o primeiro numero: \n");
                scanf("%f", &a);
                printf("Digite o segundo numero: \n");
                scanf("%f", &b);

                //Subtraindo
                resultado = a / b;

                //Mostrando resultado
                printf("A divisão dos valores é: %2.f \n", resultado);
            break;
        }

    }while(op);
}