#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int A[5]={1,3,5,7,9};
 int B[5]={2,4,6,8,10};
 int C[10]={0};
 int i=0,j=0,k;
 for(k=0;k<10;k++)
 {
  if(A[i]<B[j] && i<5)
  {
   C[k]=A[i];
   i++;
  }
  else
  {
   C[k]=B[j];
   j++;
  }
 }
 for(i=0;i<10;i++)
 {
  printf("%d\n",C[i]);
 }
 getch();
}