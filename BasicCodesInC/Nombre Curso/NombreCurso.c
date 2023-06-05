#include<stdio.h>

void main() {
    //Creo una variable de nombre tipo de caracteres
        char nombre[10];
    //Pido el ingreso del nombre
    printf("Ingrese su nombre:");
    //Cargo la variable nombre
    gets(nombre);
    //Imprimo el saludo
        printf("Hola Curso%s\n", nombre);
}