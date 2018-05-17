#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int main()
{
int lin,col, tab,soma;
int diagP,diagS;
int mat[4][4];
lin=0;
col=0;
diagP = 0;
diagS = 0;
for (lin=0; lin<=3; lin++)
{
for (col=0; col<=3;col++)
{
printf("Digite ELEMENTO da linha %d, coluna %d da matriz: ",lin+1,col+1);
// aqui no scanf preenchemos a matriz
scanf("%d", &mat[lin][col]);
}
}
//Imprimindo a matriz
printf("Matriz\n");
for (lin=0;lin<=3;lin++)
{
for (col=0;col<=3;col++)
printf("%d\t",mat[lin][col]);
printf("\n\n");

}
// Imprimindo a diagonal principal
printf("\n\nDiagonal principal\n\n");
for (lin=0; lin<=3;lin++)
{

printf("%d\n",mat[lin][lin]);

for (tab=1;tab<=lin+1;tab++)
printf("\t");
}

// o erro ta ocorrendo nesse trecho do código .. no acumulador da soma.. 

for(lin=0;lin<3;lin++)
	{
	   for(col=0;col<3;col++)
		{
			if(lin == col)
			{
				diagP = diagP + mat[lin][col];
			}
			else if(lin + 1 == 2 - (col + 1) + 1)
			{
				printf("\n%d",lin);
				diagS = diagS + mat[lin][col];
				printf("\n%d",diagS);
			}
		}
	}						 
	
	printf("\n Soma da Diagonal principal: %d\n" ,diagP);
	printf("\n Soma da Diagonal secundaria: %d\n",diagS);

printf("\n\n");
system("pause");

return 0;
}