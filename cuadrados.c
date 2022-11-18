#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int ladoA,ladoB;
	float resultadoArea;
	float resultadoPerimetro;
	int selec;
	do
	{
		printf("Ingrese que desea obtener:\n1)Area del Cuadrado\n2)Perimetro del cuadrado\n3)Area de un rectangulo\n4)Perimetro del rectangulo\n5)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 1:
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			resultadoArea=ladoA*ladoA;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 2:
			printf("Ingrese el lado del cuadrado \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			resultadoPerimetro=ladoA*4;
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 3:
			printf("Ingrese el lado menor del rectangulo \n");
			scanf("%d",&ladoA);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			resultadoArea=ladoA*ladoB;
			printf("El resultado del Area es: %f\n", resultadoArea);
			break;
		case 4:
			printf("Ingrese el lado menor del rectangulo\n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese el lado mayor del rectangulo \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			resultadoPerimetro=((ladoA*2)+(ladoB*2));
			printf("El resultado del perimetro es: %f\n", resultadoPerimetro);
			break;
		case 5:
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}
	}while(selec!=5);
	return 0;
}