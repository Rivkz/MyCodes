#include<stdio.h>
#include<conio.h>

int main(){
    int n[]={5, 4, 1, 2, 3};
    int aux, i;

    for(i=0;i<5;i++){
        if(n[i]>n[i]+1){
            aux=n[i+1];
            n[i+1]=n[i];
            n[i]=aux;
        }
    }
    for(i=0;i<5;i++){
        printf("%i", n[i]);
    }
    getch();
    return 0;
}