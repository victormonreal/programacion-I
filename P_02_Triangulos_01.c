/*
Objetivo: Determinar el tipo de triángulo (equilátero, escaleno, isóceles) de acuerdo a la longitud de sus lados. 
El programa debe verificar que los lados proporcionados SÍ formen un triángulo.
*/

/**************************************************
 * Programa para saber si un triángulo es equilátero, escaleno o isóceles de acuerdo a la longitud de sus lados.
 * 
 * Entradas:
 *    Medidas de cada uno de los lados del triángulo.
 * 
 * Salidas:
 *    Leyenda que indica si:
 *        • Sí es, o no, un triángulo.
 *        • Es un triángulo equilátero.
 *        • Es un triángulo escaleno.
 *        • Es un triángulo isóceles.
 *
**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Función para limpiar la pantalla: */
void ClrScr();
/**************************************************
* Función para saber si es un triángulo usando el
* teorema de la desigualdad del triángulo: 
**************************************************/
int Paso1(int LadoA, int LadoB, int LadoC);
/**************************************************
* Función para saber si es un triángulo equilátero: 
**************************************************/
int Paso2(int LadoA, int LadoB, int LadoC);
/**************************************************
* Función para saber si es un triángulo escaleno: 
**************************************************/
int Paso3(int LadoA, int LadoB, int LadoC);
/**************************************************
* Función para saber si es un triángulo isóceles: 
**************************************************/
int Paso4(int LadoA, int LadoB, int LadoC);

int main(){
	int intLadoA;
	int intLadoB;
	int intLadoC;
	int blnEtapa; //0: true - 1: false
	
	ClrScr();
	printf("Revisando un triangulo segun sus medidas...\n\n");
	printf("\tIngresa la medida del lado A: ");
	scanf("%d",&intLadoA);
	printf("\tIngresa la medida del lado B: ");
	scanf("%d",&intLadoB);
	printf("\tIngresa la medida del lado C: ");
	scanf("%d",&intLadoC);
	printf("\n\n\tAnalizando el triangulo...", intAnio);
	blnPaso = Paso1(intLadoA, intLadoB, intLadoC);
	if(blnPaso == 0){
		printf("\n\n\tLas medidas corresponden a un triangulo...");
		blnPaso = Paso2(intLadoA, intLadoB, intLadoC);
		if(blnPaso == 0){
			printf("\n\n\tSe trata de un triangulo equilátero.");
		}else{
			blnPaso = Paso3(intLadoA, intLadoB, intLadoC);
			if(blnPaso == 0){
				printf("\n\n\tSe trata de un triangulo escaleno.");
			}else{
				blnPaso = Paso4(intLadoA, intLadoB, intLadoC);
				if(blnPaso == 0){
					printf("\n\n\tSe trata de un triangulo isóceles.");
				}else{
					printf("\n\n\tOcurrio un error.");
				}
			}
		}
	}else{
		printf("\n\n\tLas medidas no pertenecen a un triangulo...");
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
int Paso1(int LadoA, int LadoB, int LadoC){
	int respuesta;
	respuesta = 0;
	if ((LadoA+LadoB) < LadoC) respuesta++;
	if ((LadoA+LadoC) < LadoB) respuesta++;
	if ((LadoB+LadoC) < LadoA) respuesta++;
	if (respuesta > 1) respuesta = 1;
	return respuesta;
}
int Paso2(int LadoA, int LadoB, int LadoC){
	int respuesta;
	respuesta = ((LadoA == LadoB) && (LadoB == LadoC))==0?0:1;
	return respuesta;
}
int Paso3(int LadoA, int LadoB, int LadoC){
	int respuesta;
	respuesta = ((LadoA == LadoB) || (LadoA == LadoC) || (LadoB == LadoC))==0?0:1;
	return respuesta;
}
int Paso4(int LadoA, int LadoB, int LadoC){
	int respuesta;
	respuesta = ((LadoA != LadoB) && (LadoB != LadoC) && (LadoA != LadoC))==0?0:1;
	return respuesta;
}
