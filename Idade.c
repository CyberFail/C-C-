#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main (){
    int a = 0, 
        b = 0,
        cont = 0,
        maior = 0,
        menor = 0,
        i;

    int o;

    do{
        printf("********* MENU *********\n");
        printf(" 1 - Calcular Idade das pessoas\n");
        printf(" 0 - Sair\n");

        scanf("%d", &o);


        switch(o){

            case 1:
                printf("Aqui vamos pegar a idade das pessoas: "); 
                scanf("%d", &i); 

                while (i != 0) { 
                    cont++;
                    a += i; 

                    if (cont == 1){
                        menor = maior = i; 

                    }else {
                        if (maior < i){
                            maior = i;
                        }
                        
                        if (menor > i) {
                            menor = i; 
                        }
                    } 
                printf("Proxima idade... Se quiser sair precione 0\n"); 
                scanf("%d", &i);

                }
             
                if (cont > 0) { 
                    printf("Numero de pessoas %d\n", cont); 
                    printf("Media da idade %.2f\n", (float) a / cont); 
                    printf("Maior idade: %d\n", maior);
                    printf("Menor idade: %d\n", menor); 
                    
                } else{
                    printf("Não foi informada nenhuma idade\n"); 
                    }
                    
                
            break;
    }

    }while(0);

}