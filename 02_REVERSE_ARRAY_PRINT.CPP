#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int arr[]={1,2,3,4,5};
 int i,length=arr[5];

 printf("original ARRAY :\n");
 for(i=0;i<5;i++)
 {
  printf(" %d",arr[i]);
 }
 printf("\n");

 printf("ARRAY in REVERSE ORDER :\n");
 for(i=5-1;i>=0;i--)
 {
  printf(" %d",arr[i]);
 }
 getch();
}