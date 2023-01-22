#include<stdio.h>
#include<conio.h>
int arr[]={2,4,5,1,7,8,9,3,6,10};
void swaparr(int[]);
void main()
{
 clrscr();
 int i;
 swaparr(arr);

 getch();
}

void swaparr(int arr[])
{
int i,j,temp=0;
 for(i=0;i<10;i++)
 {
  for(j=i+1;j<10;j++)
  {
   if(arr[i]>arr[j])
   {
   temp=arr[i];
   arr[i]=arr[j];
   arr[j]=temp;
   }
  }
 }
 for(i=0;i<10;i++)
 {
  printf("%d",arr[i]);
 }
}