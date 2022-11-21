#include <stdio.h>
#include <stdlib.h>
#define N 10
#define M 10
void leer_matriz(int A[N][M], int F, int C);
void imprimir_matriz(int A[N][M],int F,int C);
void leer_matriz(int A[N][M], int F, int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0;j<C;j++)
		{
			printf("Ingresa el valor de [%d][%d]\n",i,j );
			scanf("%d",&A[i][j]);
			//fflush(stdin);
		}
	}
}

void imprimir_matriz(int A[N][M],int F,int C)
{
	int i,j;
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			printf("%d\t",A[i][j]);
		}
		printf("\n");
	}
}


int main(int argc, char *argv[]) {
	int F,C, i,j;
	int mac1[N][M],mac2[N][M];
	int macR[N][M];
	printf("Ingrese el numero de filas\n");
	scanf("%d",&F);
	printf("ingrese el numero de las columnas\n");
	scanf("%d",&C);
	printf("Primer matriz\n");
	leer_matriz(mac1,F,C);
	printf("Segunda matriz\n");
	leer_matriz(mac2,F,C);
	for(i=0;i<F;i++)
	{
		for (j = 0; j < C; j++)
		{
			macR[i][j]=mac1[i][j]+mac2[i][j];
		}
	}
	printf("La matriz uno es:\n");
	imprimir_matriz(mac1,F,C);
	printf("La matriz dos es: \n");
	imprimir_matriz(mac2,F,C);
	printf("Matriz resultado\n");
	imprimir_matriz(macR,F,C);

	return 0;
}
