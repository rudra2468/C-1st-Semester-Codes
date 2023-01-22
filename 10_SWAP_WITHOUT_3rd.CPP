#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int a=10,b=20;
 printf("Before Swap A=%d , B=%d",a,b);
 a=a+b;
 b=a-b;
 a=a-b;
 printf("\nAfter Swap A=%d , B=%d",a,b);
 getch();
}