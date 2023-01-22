#include<stdio.h>
#include<conio.h>

void main()
{
clrscr();
 int n,i,j,k=1;
 n=4;
 for(i=1;i<=n;i++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
  {
   printf(" %d",k++);
  }
 }
 getch();
}