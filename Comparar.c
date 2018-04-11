#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int o;
    int a = 0,
        b = 0,
        c = 0,
        d = 0,
        x = 0;


    do{
            printf("---------- MENU ----------\n");
            printf(" 1 - Comparar valores\n");
            printf(" 0 - Sair\n");

            scanf("%d", &o);

        switch(o){
            case 1:
            printf("Digite um valor para compararmos\n");
            scanf("%d", &x);

            if(x == 0){
                printf("é null");
            } 

            if(x < 0){
                printf("é negativa");
            }

            if(x > 0){
                printf("é positivo");
            }

            break;
        }
    }while(o);

}