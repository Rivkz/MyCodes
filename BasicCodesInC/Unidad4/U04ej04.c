/*
Escriba un programa que tome cada 4 horas la temperatura exterior, durante un período de 24 horas. 
Es decir, se deben leer 6 temperaturas. Calcular la temperatura media del día, la temperatura más alta y la más baja.
Autor: Brian Ezequiel Riveiro
*/
#include<stdio.h>
#include<conio.h>

int main(){
	float i, t, tmax=-999, tmin=999, suma=0, prom;
	
	for(i=1;i<=6;i++){
		printf("\ningresar temperatura:");
		scanf("%f", &t);
		
		suma=suma+t;
		
		if(t>tmax){
			
			tmax=t;
		}
		if(t<tmin){
			
			tmin=t;
		}
	}
	prom=suma/6;
	printf("\nla temperatura maxima fue de %f", tmax);
	printf("\nla temperatura minima fue de %f", tmin);
	printf("\nel promedio fue de %f", prom);
	getch();
	return 0;
}