#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 char str[30];
 printf("\nEnter a String :");
 scanf("%s",&str);
 printf("\n REVERSE IS :%s",strrev(str));
 getch();
}