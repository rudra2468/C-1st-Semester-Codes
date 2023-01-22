#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 float discount,quantity,rate,net_rate;
 printf("ENTER AMOUNT :");
 scanf("%f",&rate);
 printf("ENTER THE QUANTITY :");
 scanf("%f",&quantity);
 net_rate=quantity*rate;
 if(quantity>100)
 {
  discount=net_rate*0.1;
  net_rate=net_rate-discount;
  printf("%f",net_rate);
 }

 else
 printf("%f",net_rate);
 getch();
}