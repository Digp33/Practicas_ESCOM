#include <stdio.h>
#include <stdlib.h>
#define L 3
void leer_matriz(int A[L][L], int F, int C);
void imprimir_matriz(int A[L][L],int F,int C);

void leer_matriz(int A[L][L], int F, int C)
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
void imprimir_matriz(int A[L][L],int F,int C)
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

void transpuesta(int A[L][L],int B[L][L],int espacio)
{
	int i,j;
	for(i=0;i<L;i++)
	{
		for (j = 0; j < L; j++)
		{
			B[j][i]=A[i][j];
		}
	}
}

int main(int argc, char *argv[]) {
	int A[L][L],B[L][L],i,j;
	printf("Este programa da el resultado de una matriz transpuesta de 3x3\n");
	printf("Por favor, ingrese la matriz:\n");
	leer_matriz(A,L,L);
	transpuesta(A,B,L);
	printf("La matriz original es:\n");
	imprimir_matriz(A,L,L);
	printf("La matriz transpuesta es:\n");
	imprimir_matriz(B,L,L);
	return 0;
}











