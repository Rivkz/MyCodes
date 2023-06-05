//Vector ejercicio n1
#include<stdio.h>
#include<math.h>
#include<conio.h>
int main() {
    int numeros []= { 2, 4, 6, 8, 1};
    int suma=0;
	printf("los numeros son: 2, 4, 6, 8 y 1");
    for(int i=0; i<5; i++) {
        suma=suma+numeros[i];
    }
    printf("\nLa suma de los elementos es: %i", suma);

	getch();
    return 0;
}