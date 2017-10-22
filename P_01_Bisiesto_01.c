#include <stdio.h>
#include <math.io>

//Objetivo: Determinar si un año es bisiesto

int main()

{	
	int fecha,respuesta;

	do 
	{
		system ("cls");
	
		printf("Este es un programa que determina si un año dado es o no es bisiesto.\n");
	
		printf("Por favor, introduce un año: ");
		scanf("%i",&fecha);
	
		if (fecha % 4 == 0) 
		{
			if (fecha % 100 == 0) 
			{
				if (fecha % 400 == 0) 
				{
					printf ("\nEl año %i es un año bisiesto.\n",fecha);
				}
			
				else 
				{
					printf ("\nEl año %i no es un bisiesto.\n",fecha);
				}
			
			}
		
			else 
			{
				printf ("\nEl año %i es un año bisiesto.\n",fecha);
			}
	
		}
	
		else 
		{
			printf ("\nEl año %i no es un año bisiesto.\n",fecha);
		}
	
		printf("\nDeseas repetir el proceso? Escribe 1 para repetir: ");
		scanf("%i",&respuesta);
				
	} while(respuesta==1);

	return 0;
}
