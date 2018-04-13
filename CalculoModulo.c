#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (){
    int a = 0,
        b = 0;
    int o;

    do{
        printf("********* MENU *********\n");
        printf(" 1 - Calcular numeros entre 1000 e 2000 com resto 5\n");
        printf(" 0 - Sair\n");

        scanf("%d", &o);


        switch(o){

            case 1:
                printf("O programa vai calcular os numeros entre 1000 e 2000, divididos por 11, e mostrara os que tiverem resto 5\n");

                for(int i = 1000; i <= 2000;  i++){

                    if( i % 11 == 5){
                        printf("%d\n", i);
                    }

                }
            break;

        }

    }while(0);

}