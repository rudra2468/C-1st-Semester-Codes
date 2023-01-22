#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int n,c,k;
 printf("ENTER THE NUMBER OF ROWS\n");
 scanf("%d",&n);
 for(k=1;k<=n;k++)
 {
  printf("\n");
  for(c=1;c<=n-k;c++)
  {
   printf(" ");
  }
  for(c=1;c<=2*k-1;c++)
  {
   printf("*");
  }
 }

 for(k=1;k<=n;k++)
 {
  printf("\n");
  for(c=1;c<=k;c++)
  {
  printf(" ");
  }
  for(c=1;c<=2*(n-k)-1;c++)
  {
   printf("*");
  }
 }
 getch();
}