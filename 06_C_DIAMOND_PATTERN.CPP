#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int r;
 printf("Enter the no. of rows :");
 scanf("%d",&r);
 int space=r-1;
 int stars=1;
 for(int i=1;i<r;i++)
 {
  printf("\n");
  for(int j=1;j<space;j++)
  {
   printf(" ");
  }
  for(int k=1;k<stars;k++)
  {
   printf("*");
  }
  if(space<i)
  {
   space=space+1;
   stars=stars-2;
  }
  if(space>i)
  {
   space=space-1;
   stars=stars+2;
  }
 }

 getch();
}