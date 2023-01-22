#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 int i,r,j;
 printf("ENTER THE NO OF ROWS U WANT :");
 scanf("\n%d",&i);
 for(r=1;r<=i;r++)
 {
  printf("\n");
  for(j=1;j<=r;j++)
  {
   printf("*");
  }
 }
 getch();
 return 0;
}