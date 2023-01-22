#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 char op;
 int first, second;
 printf("ENTER first OPERANDS");
 scanf("%d",&first);
 printf("ENTER second OPERANDS");
 scanf("%d",&second);
 printf("ENTER THE OPERATOR\n1 for +\n2 for -\n3 for *\n4 for /: ");
 scanf("%d",&op);
 switch(op)
 {
  case 1:
	printf("%d",first+second);
	break;
  case 2:
	printf("%d",first-second);
	break;
  case 3:
	printf("%d",first*second);
	break;
  case 4:
	printf("%d",first/second);
	break;
  default:
	printf("INVALID OPERATION\n");

 }
 getch();
}