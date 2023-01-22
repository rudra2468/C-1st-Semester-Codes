#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();

 int a;
 printf("Enter the no.");
 scanf("%d",&a);
 if(a%2==0){
    printf("%d is an even no.",a);
   }else{
	 printf("%d is an odd no.",a);
	}
 getch();
}