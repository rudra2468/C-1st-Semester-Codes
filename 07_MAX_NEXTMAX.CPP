#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,arr[6]={1,2,3,4,7,8};
 int max=0,next_max=0;
 for(i=0;i<=5;i++)
   {
    if(max<arr[i])

    next_max=max;
    max=arr[i];
    if(arr[i]<max && arr[i]>next_max)
     {
      next_max=arr[i];
     }
   }
 printf("%d %d",max,next_max);

 getch();
}