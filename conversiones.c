#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float gradosC,gradosF,gradosK;
	float conversionC,conversionF,conversionK;
	int selec;
	do
	{
		printf("Ingrese que desea obtener:\n1)Celcius a Kelvin y Farenheit\n2)Kelvin a Celcius y Farenheit\n3)Farenheit a Celcius y kelvin\n4)Regresar al menu\n");
		scanf("%i",&selec);
		fflush(stdin);
		switch(selec)
		{
		case 1:
			printf("Ingrese los grados \n");
			scanf("%f",&gradosC);
			fflush(stdin);
			conversionF=(gradosC*(1.8))+32;
			conversionK=gradosC+ 273.15;
			printf("Los grados en Farenheit son: %f\n", conversionF);
			printf("Los grados en Kelvin son: %f\n", conversionK);
			fflush(stdin);
			break;
		case 2:
			printf("Ingrese los grados \n");
			scanf("%f",&gradosF);
			fflush(stdin);
			conversionC=(gradosF-32)*(.555);
			conversionK=((.555)*(gradosF-32))+273.15;
			printf("Los grados en Kelvin son: %f\n", conversionK);
			printf("Los grados en Celcius son: %f\n", conversionC);
			fflush(stdin);
			break;
		case 3:
			printf("Ingrese los grados \n");
			scanf("%f",&gradosK);
			fflush(stdin);
			conversionC=gradosK-273.15;
			conversionF=((gradosK-273.15)*(1.8))+32;
			printf("Los grados en Celcius son: %f\n", conversionC);
			printf("Los grados en Farenheit son: %f\n", conversionF);
			fflush(stdin);
			break;
		case 4:
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}

	}while(selec!=4);
	return 0;
}