#include <stdio.h>
#include <math.io>

/*
Objetivo: Obtener el valor de PI con el siguiente producto (preguntar cuántos términos se desean)
PI = 2(2/1)(2/3)(4/3)(4/5)(6/5)(6/7)(8/7)(8/9)...
*/

void ClrScr();

int main(){
	ClrScr();
	printf("Cuantos terminos requieres?
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
