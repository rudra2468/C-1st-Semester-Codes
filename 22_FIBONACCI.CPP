#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int r,i=0,j=1;
 int next=i+j;
 printf("Enter the no. of terms :");
 scanf("%d\n",&r);
 printf("%d, %d, ",i,j);
 for(int p=0;p<=r;p++)
 {
  printf("%d, ",next);
  i=j;
  j=next;
  next=i+j;
 }
 getch();
}