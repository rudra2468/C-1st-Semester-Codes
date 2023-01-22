#include<stdio.h>
#include<conio.h>

int main()
{
 clrscr();
 int i,r,j;
 printf("ENTER THE NO. OF ROWS U WANT");
 scanf("%d",&i);
 for(r=1;r<=i;r++)
 {
  printf("\n");
  for(j=1;j<=i;j++)
  {
  if(r==1|r==i||j==1||j==i)
   {
    printf("*");
   }
   else
   {
    printf(" ");
   }
  }
 }
 getch();
 return 0;
}