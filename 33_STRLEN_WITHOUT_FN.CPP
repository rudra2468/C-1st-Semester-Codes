#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 char str[50]={0};
 int i,length=0;
 printf("ENTER THE STRING/STATEMENT");
 scanf("%s",str);
 for(i=0;str[i]!=0;i++)
 length++;
 printf("\nLENTGH OF THE STRING IS :%d",length);
 getch();
}