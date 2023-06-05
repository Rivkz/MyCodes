#include<stdio.h>
#include<conio.h>

int main(){
    int n[]={5, 4, 1, 2, 3};
    int aux, i;

    do{
		for(i=0;i<5;i++){
        if(n[i]>n[i+1]){
           aux=n[i];
           n[i]=n[i+1];
            n[i+1]=aux;
        }
		}
	}while(n[0]>n[1]);
    for(i=0;i<5;i++){
        printf("%i", n[i]);
    }
    getch();
    return 0;
}