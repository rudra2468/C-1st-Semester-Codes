#include<stdio.h>
#include<conio.h>

int revDig(int);
void main()
{
 clrscr();
 int num = 4562;
 printf("Reverse of no.%d is %d",num,revDig(num));
 getch();
}

int revDig(int num)
{
 int rev_num=0;
 while(num>0)
 {
  rev_num=rev_num * 10 + num % 10 ;
  num=num/10;
 }
 return rev_num;
}