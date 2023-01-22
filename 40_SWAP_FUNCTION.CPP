#include<stdio.h>
#include<conio.h>

void swapv(int,int);

void main()
{
 clrscr();
 int a,b;
 scanf("%d%d",&a,&b);
 swapv(a,b);
 printf("a=%d b=%d",a,b);
 getch();
}

void swapv(int x,int y)
{
 int t=x;
 x=y;
 y=t;
 printf("x=%d y=%d\n",x,y);
}