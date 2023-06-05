
#include<stdio.h>
#include<conio.h>


int main(){


char usuario[10];
int base, altura, resultado;

printf("Ingrese el valor de Base: ");
scanf("%i", &base);


printf("Ingrese el valor de altura: ");
scanf("%i", &altura);


resultado = base * altura;


printf("El Area del Rectagungulo es: %i", resultado);
getch();
}