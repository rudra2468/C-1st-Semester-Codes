#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int A[]={1,2,5,1,3,7,9,2,7,8,1};
 int B[10]={0};
 int i,j;
 for(i=0;i<11;i++)
  {
   B[A[i]]=B[A[i]]+1;

  }

 for(i=0;i<=9;i++)
  {
   for(j=1;j<=B[i];j++)
    {
     printf("\n%d",i);
    }
  }

 getch();
}