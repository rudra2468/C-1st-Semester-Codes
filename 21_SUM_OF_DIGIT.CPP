#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int n,t,sum=0,remainder;
 printf("ENTER THE NO.");
 scanf("%d",&n);
 t=n;
 while(t!=0)
 {
  remainder=t%10;
  sum=sum+remainder;
  t=t/10;
 }
 printf("SUM OF THE DIGIT %d = %d",n,sum);
getch();
}