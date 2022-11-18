#include <stdio.h>
#include <stdlib.h>



int triangulo(int argc, char *argv[]) {
	//Declaramos las variables a utilizar tanto para que el usuario digite los datos como para los resultados
	int ladoA,ladoB,ladoC;
	int altura;
	float resultadoArea;
	float resultadoPerimetro;
	//Declaramos la variable que nos va a dar pauta a el uso del Switch-case y el Do-while
	char selec;
	//Inicializamos el Do-while el cual se va a 
	do
	{
		printf("Ingrese que desea obtener:\n A)Area de el triangulo\nB)Perimetro de un triangulo\nC)Regresar al menu\n");
		scanf("%c",&selec);
		fflush(stdin);
		switch (selec)
		{
		case 'A':
			printf("Ingrese la base del triangulo: \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese la altura del triangulo: \n");
			scanf("%d",&altura);
			fflush(stdin);
			resultadoArea=((ladoA*altura)/2);
			printf("El resultado es: %f\n", resultadoArea);

			break;
		case 'B':
			printf("Ingrese el lado A del triangulo: \n");
			scanf("%d",&ladoA);
			fflush(stdin);
			printf("Ingrese el lado B del triangulo: \n");
			scanf("%d",&ladoB);
			fflush(stdin);
			printf("Ingrese el lado C del triangulo: \n");
			scanf("%d",&ladoC);
			fflush(stdin);
			resultadoPerimetro=ladoA+ladoB+ladoC;
			printf("El resultado es: %f\n", resultadoPerimetro);
			break;
		case 'C':
			printf("Gracias por usar esta funcion :)\n");
			break;
		default:
			printf("\nLa opcion no es la correcta, vuelva a intentar\n");
			fflush(stdin);
			break;
		}
	}while (selec!='C');
	return 0;
}

int cuadrados(int argc, char *argv[]) {
	
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
int conversiones(int argc, char *argv[]) {
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