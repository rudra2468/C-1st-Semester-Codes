#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int arr[5]={1,2,3,4,5};
 int i;
 printf("THE REVERSE IS :\n");
 for(i=4;i>=0;i--)
 {
  printf(" %d",arr[i]);
 }

 getch();
}