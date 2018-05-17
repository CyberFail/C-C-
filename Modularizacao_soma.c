#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void soma(int a, int b){
    a+=b;
    printf("O resultado da soma eh: %d\n\n", a);
}

void sub(int a, int b){
     a-=b;
    printf("O resultado da subtracao eh:%d\n\n", a);
}

void mult(int a, int b){
     a*=b;
    printf("O resultado da multiplicacao eh: %d\n\n", a);
}

void divi(int a, int b){
     a/=b;
    printf("O resultado da divisao eh: %d\n\n", a);
}

int main(){
    int op;
    int a = 0, b = 0;
    int x = 0, y = 0;

    printf("----------MENU----------\n");
    printf("---------1 - Soma----------\n");
    printf("---------2 - Subt---------\n");
    printf("---------3 - Mult----------\n");
    printf("---------4 - Divi----------\n");

    printf("Digite a sua opcao:\n");

    scanf("%d", &op);
    
    do{
        switch(op){
            case 1:
                printf("Digite o primeiro valor para somar\n");
                scanf("%d", &x);
                printf("Digite o segundo valor para somar\n");
                scanf("%d", &y);
                
                soma(x, y);
            break;

            case 2:
                printf("Digite o primeiro valor para subtrair\n");
                scanf("%d", &x);
                printf("Digite o segundo valor para subtrair\n");
                scanf("%d", &y);
                sub(x,y);
            break;

            case 3:
                printf("Digite o primeiro valor para multiplicar\n");
                scanf("%d", &x);
                printf("Digite o segundo valor para multiplicar\n");
                scanf("%d", &y);
                mult(x,y);
            break;

            case 4:
                printf("Digite o primeiro valor para dividir\n");
                scanf("%d", &x);
                printf("Digite o segundo valor para dividir\n");
                scanf("%d", &y);
                divi(x,y);
            break;
        }


    }while(0);






}