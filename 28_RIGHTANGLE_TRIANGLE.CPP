#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int x,y,z;
 printf("ENTER THE THREE POINTS");
 scanf("%d %d %d",&x,&y,&z);
 if((x*x)+(y*y)==(z*z)||(x*x)+(z*z)==(y*y)||(z*z)+(y*y)==(x*x))
 {
  printf("IT IS RIGHT ANGLED TRIANGLE");
 }
 else
 printf("IT IS NOT A RIGHT ANGLED TRIANGLE");
 getch();
}