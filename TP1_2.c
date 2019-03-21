/*
 ============================================================================
 Name        : TP1_2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : TP1_2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int cuadrado(int num);
void cuadrado_void(int num);
void direccion_y_contenido(int num);
void invertir(int a, int b);
void ordenar(int a, int b);

int main(void) {

	int num=3, a=7, b=2;

	printf("I) El cuadrado de %i es %i\n",num,cuadrado(num));
	cuadrado_void(num);
	direccion_y_contenido(num);
	invertir(a, b);
	ordenar(a, b);

	return EXIT_SUCCESS;
}


int sumar(int a, int b){
	return a+b;
}

int cuadrado(int num){
	return pow(num,2);
}

void cuadrado_void(int num){
	printf("II) El cuadrado de %i es %f\n", num, pow(num,2));
	return;
}

void direccion_y_contenido(int num){
	printf("III) El contenido de la variable es %i y si direccion de memoria es %p\n", num, &num);
	return;
}

void invertir(int a, int b){
	int aux;

	printf("IV) Valores originales: a=%i, b=%i ", a, b);
	aux=a;
	a=b;
	b=aux;

	printf("| Valores invertidos: a=%i, b=%i\n", a, b);

	return;
}

void ordenar(int a, int b){
	int aux;

	printf("V) Valores originales: a=%i, b=%i ", a, b);

	if(a>b){
		aux=a;
		a=b;
		b=aux;
		printf("| Valores ordenados: a=%i, b=%i", a, b);
	}else{
		printf("| Valores ordenados: a=%i, b=%i", a, b);
	}

	return;
}












