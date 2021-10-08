/**************************************************
 * Programa para saber si un año fue o será bisiesto.
 * 
 * Entradas:
 *    Año: Un número entero de 4 o más cifras
 * 
 * Salidas:
 *    Texto: Una leyenda que indica si el año es o no
 *           bisiesto.
 *
 * Nota: se puede cambiar la salida a tipo booleana.
**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Función para limpiar la pantalla: */
void ClrScr();
/* Función para limpiar la pantalla: */
int Paso1(int valor);
int Paso2(int valor);
int Paso3(int valor);

int main(){
	int intAnio;
	int blnPaso; //0: true - 1: false
	
	ClrScr();
	printf("Ingresa el anio que requieres: ");
	scanf("%d",&intAnio);
	printf("\n\nAnalizando el anio %d ...\n\n", intAnio);
	blnPaso = Paso1(intAnio);
	if(blnPaso == 0){
		printf("El anio %d es uniformemente divisible por 4, continuamos...\n",intAnio);
		blnPaso = Paso2(intAnio);
		if(blnPaso == 0){
			printf("El anio %d es uniformemente divisible por 100, continuamos...\n",intAnio);
			blnPaso = Paso3(intAnio);
			if(blnPaso == 0){
				printf("El anio %d es uniformemente divisible por 400, continuamos...\n",intAnio);
				printf("\nEl anio %d si es bisiesto y tiene 366 dias.\n",intAnio);
			}else{
				printf("El anio %d no es bisiesto y tiene 365 dias.\n",intAnio);
			}
		}else{
			printf("\nEl anio %d si es bisiesto y tiene 366 dias.\n",intAnio);
		}
	}else{
		printf("El anio %d no es bisiesto y tiene 365 dias.\n",intAnio);
	}
	return 0;
}

void ClrScr(){
// Borra pantalla en Windows	
#ifdef _WIN32
	system("cls");
// Borra pantalla en Linux
#elif __linux__
	system("clear");
#endif
}
int Paso1(int valor){
	int respuesta;
	respuesta = (valor % 4)==0?0:1;
	return respuesta;
}
int Paso2(int valor){
	int respuesta;
	respuesta = (valor % 100)==0?0:1;
	return respuesta;
}
int Paso3(int valor){
	int respuesta;
	respuesta = (valor % 400)==0?0:1;
	return respuesta;
}

