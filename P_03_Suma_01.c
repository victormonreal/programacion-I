/*
Objetivo: Sumar los números enteros que estén entre n y m con incrementos k. Verificar que n<=m
*/

/**************************************************
 * Programa para sumar los números enteros que están entre n y m con incrementos k.
 * 
 * Entradas:
 *    n - Parametro donde empieza la suma.
 *    m - Parametro donde termina la suma.
 *    k - Parametro para incrementar la suma.
 * 
 * Salidas:
 *    Leyenda que indica sí n es menor igual que m.
 *    Leyenda que muestra el total.
 *
**************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Función para limpiar la pantalla: */
void ClrScr();
/**************************************************
* Función para saber si n es menor igual que m: 
**************************************************/
int Paso1(int DatoA, int DatoB);
/**************************************************
* Función para calcular el total desde n hasta m incrementando k: 
**************************************************/
int Paso2(int DatoA, int DatoB, int DatoC);

/**************************************************
* Función principal: 
**************************************************/
int main(){
	int intDatoA;
	int intDatoB;
	int intDatoC;
	int intDatoD;
	int blnEtapa; //0: true - 1: false
	
	ClrScr();
	printf("Sumatoria de enteros...\n\n");
	printf("\tIngresa el entero donde empieza: ");
	scanf("%d",&intDatoA);
	printf("\tIngresa el entero donde termina: ");
	scanf("%d",&intDatoB);
	printf("\tIngresa el entero de incremento: ");
	scanf("%d",&intDatoC);
	printf("\n\n\tHaciendo pruebas...");
	blnEtapa = Paso1(intDatoA, intDatoB);
	if(blnEtapa == 0){
		printf("\n\n\tComo n si es menor igual que m entonces si hacemos la sumatoria...");
		intDatoD = Paso2(intDatoA, intDatoB, intDatoC);
		printf("\n\n\tLa suma desde %d hasta %d con incrementos %d es %d", intDatoA, intDatoB, intDatoC, intDatoD);
	}else{
		printf("\n\n\tOcurrio un error.");
		printf("\n\n\tComo n no es menor igual que m entonces no hacemos la sumatoria...");
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
int Paso1(int DatoA, int DatoB){
	return DatoA <= DatoB ? 0 : 1;
}
int Paso2(int DatoA, int DatoB, int DatoC){
	int n, m, k, r;
	n = DatoA;
	m = DatoB;
	k = DatoC;
	r = 0;
	while(n <= m){
		r += n;
		n += k;
	}
	return r;
}
