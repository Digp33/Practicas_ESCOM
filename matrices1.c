#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 10
int main(int argc, char *argv[]) {
	int F,C, i,j;
	int mac1[N][M],mac2[N][M];
	int macR[N][M];
	printf("Ingrese el numero de filas\n");
	scanf("%d",&F);
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&C);

	printf("Primer matriz\n");
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&mac1[i][j]);
			//fflush(stdin);
		}
	}
	printf("Segunda matriz\n");
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&mac2[i][j]);
			//fflush(stdin);
		}
	}
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			macR[i][j]=mac1[i][j]+mac2[i][j];
		}
	}
	printf("Matriz resultado\n");
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			//printf("Ingresa el valor de [%i][%i]\n",i++,j++ );
			//scanf("%i",&macR[i][j]);
			printf("%d\t",macR[i][j]);
		}
		printf("\n");
	}


	return 0;
}