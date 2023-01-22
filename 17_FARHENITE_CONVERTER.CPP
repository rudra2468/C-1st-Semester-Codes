#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int farhenite,celcius;
 printf("Enter the value of Celcius u want to convert :");
 scanf("%d",&celcius);
 farhenite=(celcius*9/5)+32;
 printf("\nThe value of Farhenite = %d",farhenite);
 getch();
}