#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

    int o;
    int a = 0,
        b = 0,
        c = 0;

    do{
        //Menu
        printf("********** Menu **********\n");
        printf(" 1 - Numero menor\n");
        printf(" 0 - Sair\n");

        scanf("%d", &o);


        switch(o){
            case 1:
                printf("Digite o valor dos produtos para podermos calcular qual o mais barato\n");

                //primeiro numero
                printf("Digite o primeiro numero\n");
                scanf("%d", &a);

                //Segundo numero
                printf("Digite o primeiro numero\n");
                scanf("%d", &b);

                //Terceiro numero
                printf("Digite o primeiro numero\n");
                scanf("%d", &c);

                if (a < b && a < c){
                    printf("%d", a);
                } else if(b < a && b < c){
                    printf("%d", b);
                } else {
                    printf("%d", c);
                }
            break;

        }

    }while(o);



}