#include<stdio.h>
#include<stdlib.h>

int main(){
    int o, val_user;

    do{
        printf("*-*-*-*-*-*-*-* MENU *-*-*-*-*-*-*-*\n");
        printf(" 1 - O número é PAR ou ÍMPAR ?\n");
        printf(" 0 - Sair\n");

        scanf("%d", &o);

        switch(o){
       
            case 1:
                printf("Digite um número e nos dizemos se é par ou ímpar\n");
                scanf("%d", &val_user);


                if(val_user % 2 == 0){
                    printf("O valor é par\n");
                } else{
                    printf("O valor é impar\n");
                }

            break;
        }

    }while(o);

}