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
void cuadrado_void(int num, int *sqr);
void direccion_y_contenido(int num);
void invertir(int *a, int *b);
void ordenar(int *c, int *d);
void ordenar_e_imprimir(int *e, int *f);

int main(void) {
	setvbuf(stdout,NULL,_IONBF,0);

	int num=3, a=7, b=2, sqr=0, c=11, d=5, e, f;

//******************Apartado I)******************
	printf("I) El cuadrado de %i es %i\n\n",num,cuadrado(num));

//******************Apartado II)******************
	cuadrado_void(num,&sqr);
	printf("II) El cuadrado de %i es %i\n\n", num, sqr);

//******************Apartado III)******************
	direccion_y_contenido(num);

//******************Apartado IV)******************
	printf("IV) Valores originales: a=%i, b=%i ", a, b);
	invertir(&a,&b);
	printf("| Valores invertidos: a=%i, b=%i\n\n", a, b);

//******************Apartado V)******************
	printf("V) Valores originales: c=%i, d=%i ", c, d);
	ordenar(&c, &d);
	printf("| Valores ordenados: c=%i, d=%i\n\n", c, d);

//******************Apartado VI)******************
	printf("VI) Ingrese dos valores a ordenar separados por un espacio: ");
	scanf("%i %i", &e, &f);
	printf("\nValores ingresados: e=%i, f=%i ", e, f);
	ordenar_e_imprimir(&e, &f);
	printf("| Valores ordenados: e=%i, f=%i\n\n", e, f);




	return EXIT_SUCCESS;
}

int cuadrado(int num){
	return pow(num,2);
}

void cuadrado_void(int num, int *sqr){
	*sqr=pow(num,2);

	return;
}

void direccion_y_contenido(int num){
	printf("III) El contenido de la variable es %i y si direccion de memoria es %p\n\n", num, &num);
	return;
}

void invertir(int *a, int *b){
	int aux;

	aux=*a;
	*a=*b;
	*b=aux;

	return;
}

void ordenar(int *c, int *d){
	int aux;

	if(*c>*d){
		aux=*c;
		*c=*d;
		*d=aux;
	}

	return;
}

void ordenar_e_imprimir(int *e, int *f){
	int aux;

	if(*e>*f){
		aux=*e;
		*e=*f;
		*f=aux;
	}

	return;
}












