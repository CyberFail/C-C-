#include<stdio.h>
#include<stdlib.h>
#define max 5

int main(){
    int vet[max][max];
    int maior = 0;
    int i = 0,
        j = 0;

    
    printf("Preencha a matriz");

    for (i = 0; i<max; i++){

        for(j = 0; j < max; j++){
            printf("v[%d][%d]", i, j);
            scanf("%d", &vet[i][j]);
        }

        maior = vet[0][0];

        for(i = 0; i < max; i++){

            for(j =i; j< max; ){
                if(vet[i][j]>maior){
                    maior = vet[i][j];

                    
                }
                break;
            }

        }

    }

    printf("Maior valor %d", maior);
    return 0;
}