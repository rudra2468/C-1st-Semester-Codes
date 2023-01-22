#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
 clrscr();
 int count=0;
 char str[30]={0};
 printf("\nEnter a String :");
 scanf("%s",&str);
 for(int i=0;str[i]!=0;i++)
 {
  if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  count++;
 }
 printf("%d",count);
 getch();
}