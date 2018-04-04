#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
    int op;
    float massa_corp = 0, altura = 0, imc = 0;
    char s;
 

    do{

        printf("********_MENU_********\n");
        printf(" 1 - Calcular IMC\n");
        printf(" 0 - Sair");

        scanf("%d", &op);

        switch (op){
            case 1:
                //Escolhendo se é masculino ou feminino
                printf("Digite M ou F para decidir o sexo\n");
                scanf("%s", &s);

                printf("Digite seu peso: ");
                scanf("%f", &massa_corp);

                printf("Digite sua altura: ");
                scanf("%f", &altura);

                //Verificando escolha
                if( s == 'M'){

                    imc = (massa_corp * altura) / 2;

                    if(imc < 18){
                        printf("Você está magro %.2f \n", imc);
                    }
                    
                    if(imc <= 25){

                        printf("Você está sarado %.2f \n", imc);

                    }

                    if((imc > 25) && (imc < 30)){

                        printf("Você está um pouco acima do peso %.2f\n", imc);

                    }

                    if(imc > 30 ){

                        printf("Você esta muito acima do peso %.2f\n", imc);

                    }

                }

                if(s == 'F'){

                } 


            break;
        }


    }while(op);

}