/*
 ============================================================================
 Name        : TP1_1.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : TP1_1
 ============================================================================
 */

#include<stdio.h>
#include<stdlib.h>

int main (void){

	setvbuf(stdout, NULL, _IONBF, 0);

	int vble=10;
	int *punt=&vble;

	printf("(1)Contenido del puntero: %i\n",*punt);
	printf("(2)Dirección de memoria almacenada por el puntero: %p\n", punt);
	printf("(3)Dirección de memoria de la variable: %p\n", &vble);
	printf("(4)Dirección de memoria del puntero: %p\n", &punt);
	printf("(5)El tamaño de memoria utilizado por esa variable: %d\n", sizeof(vble));

	/*
	 Los puntos 2 y tres dan el mismo valor porque uno muestra el contenido del puntero
	 el cual guardo la direccion de memoria de la variable, y el otro muestra directamente
	 la direccion de memoria de la variable gracias a la notacion utilizada
	*/

	/*
	 En el punto 4 se obtiene la direccion de memoria DEL PUNTERO, no de la direccion
	 de memoria que este almacena. Y claramente no es igual a los anteriores porque este
	 tiene la direccion de memoria del puntero
	*/







	return 0;
}
