#include <stdio.h>
#include <stdlib.h>

int main(){
    int o, res, val_user;

    do{
    printf("---------- MENU ----------\n");
    printf(" 1 - Calculo 100 primeiros numeros\n");
    printf(" 2 - Calculo de multiplos numeros\n");
    printf(" 3 - Loop Infinito\n");
    printf(" 0 - Sair\n");

    scanf("%d", &o);

    switch(o){ 

        case 1:
            printf("Calculando a soma dos 100 primeiros numeros");
            for(int i = 0; i<=100; i++){
                res = i + i;
                printf("O valor é %d\n", res);
            }
        break;

        case 2:
            
            printf("Digite um numero, o programa ira somar todos os valores até ele!\n");
            scanf("%d", &val_user);
            printf("Calculando a soma dos numeros");
            for(int i = 0; i<=val_user; i++){
                res = i + i;
                printf("O valor é %d\n", res);
            }
        break;

        case 3:
            printf(" LOOOOOOOOOOOOOOP");
            for ( ; ; ){
                printf("LOOOOOOP");
            }
        break;

    }

    }while(o);
}

