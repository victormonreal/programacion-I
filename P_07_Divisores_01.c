#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int gotoxy(int x, int y){
	HANDLE hcon;
	hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
	return 0;
}
int limpia(){
	system("cls");
	return 0;
}
int marco(){
	int x, y;
	for(x=0;x<40;x++){
		gotoxy(x + 40,0);
		printf("%c",205);
		gotoxy(40-x,0);
		printf("%c",205);
		gotoxy(x + 40,25);
		printf("%c",205);
		gotoxy(40-x,25);
		printf("%c",205);
	};
	gotoxy(0,0);
	printf("%c",201);
	gotoxy(80,0);
	printf("%c",187);
	gotoxy(0,25);
	printf("%c",200);
	gotoxy(80,25);
	printf("%c",188);
	for(y=0;y<13;y++)	{
		gotoxy(0,y+1);
		printf("%c",186);
		gotoxy(80,y+1);
		printf("%c",186);
		gotoxy(0,24-y);
		printf("%c",186);
		gotoxy(80,24-y);
		printf("%c",186);
	};
	return 0;
}
int inicio(){
	limpia();
	marco();
	gotoxy(20,2);
	printf("Universidad Nacional Aut%cnoma de M%cxico",162,130);
	gotoxy(20,3);
	printf("Facultad de Estudios Superiores Acatlan");
	gotoxy(10,10);
	printf("Programa que calculara los divisores existentes para un n%cmero.",163);
	gotoxy(10,11);
	printf("Los divisores son n%cmeros cuando dividen a otros no que residuo.",163);

	gotoxy(10,16);
	printf("En el quipo de programaci%cn colaborar%cn:",162,162);
	gotoxy(15,18);
	printf("Galv%cn Lugo Alberto Hazel",161);
	gotoxy(15,19);
	printf("Hern%cndez Flores Luis %cngel",160,181);
	gotoxy(15,20);
	printf("Monreal Tovar Victor Armando");
	gotoxy(15,21);
	printf("Ram%crez Ch%cvez M%cnica",161,160,162);
	gotoxy(15,22);
	printf("Santiago Reyes Donovan Ariel");
	gotoxy(5,24);
	system("Pause");
}
int obtenerDivisores(int numero){
	int numeros,x=5,y=5,pagina=1;
	limpia();
	marco();
	gotoxy(2,2);
	printf("Los divisores de %d son: ",numero);
	gotoxy(2,3);
	printf("Pagina: %d",pagina);
	for(numeros=1;numeros<=numero;numeros++)
	{
		if(numero%numeros==0)
		{
			if(y%20==0){
				x+=10;
				y=5;
			}
			if(x>80){
				x=5;
				gotoxy(2,23);
				system("Pause");
				pagina++;
				limpia();
				marco();
				gotoxy(2,2);
				printf("Los divisores de %d son: ",numero);
				gotoxy(2,3);
				printf("Pagina: %d",pagina);
			}
			gotoxy(x,y);
			printf("%d ",numeros);
			y++;
		}
	}
}
int ingresarDatos(){
	int x; 
	limpia();
	marco();
	gotoxy(2,2);
	printf("N%cmero:",163);
	gotoxy(11,2);
	scanf("%d",&x);
	return x;
}
int main()
{
	char Repetir;
	inicio();
	do
	{
		obtenerDivisores(ingresarDatos());
		gotoxy(2,23);
		printf("Presiona s para salir, r para reinciar ... ",163);
		Repetir = getche();
	}while(Repetir != 's');
}
