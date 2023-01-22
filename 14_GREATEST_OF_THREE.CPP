#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int i,j,k;
 printf("ENTER VALUE for I\n");
 scanf("%d",&i);
 printf("ENTER VALUE for J\n");
 scanf("%d",&j);
 printf("ENTER VALUE for K\n");
 scanf("%d",&k);
 printf("----------------\n");
 if(i>j && i>k)
 printf("\4 I is GREATEST \4\n");
 if(j>i && j>k)
 printf("\4 J is GREATEST \4\n");
 if(k>i && k>j)
 printf("\4 K is GREATEST \4\n");

 getch();
}