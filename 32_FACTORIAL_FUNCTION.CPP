#include<stdio.h>
#include<conio.h>

int factorial(int x);
int factorial(int x)
{
 if(x>=1)
 return x*factorial(x-1);
 else

 return 1;
}
int main()
{
 clrscr();
 int x;
 printf("Enter a positive integer: ");
 scanf("%d",&x);
 printf("Factorial of %d = %d",x,factorial(x));
 getch();
 return 0;

}



