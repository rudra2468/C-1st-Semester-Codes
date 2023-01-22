#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int year;
 printf("ENTER THE YEAR :");
 scanf("%d",&year);
 if(year%4==0)
 printf("IT IS A LEAP YEAR");
 else
 printf("IT IS NOT A LEAP YEAR");
 getch();
}