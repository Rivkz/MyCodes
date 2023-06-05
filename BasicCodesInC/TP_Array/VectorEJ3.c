#include<stdio.h>
#include<conio.h>
int main()
{
  int n[]={1,3,5,7,10};
  int i=0, x;
   
  for(x=0;x<5;x++){
   printf("%d = %d\n",i,n[x]);
 i++;
}
	getch();
    return 0;
}