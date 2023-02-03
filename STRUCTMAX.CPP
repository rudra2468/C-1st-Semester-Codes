#include<stdio.h>
#include<conio.h>
struct gg
{
 int roll;
 char name[10];
 int marks;
};
typedef struct gg g;

void main()
{
 int max=0,j;
 clrscr();
 g st1[10];
 for(int i=0;i<2;i++)
 {
  printf("ENTER ROLL NO :");
  scanf("%d",&st1[i].roll);
  printf("ENTER NAME :");
  scanf("%s",&st1[i].name);
  printf("ENTER THE MARKS SCORED :");
  scanf("%d",&st1[i].marks);
 }
 clrscr();
/* for(i=0;i<5;i++)
 {
  printf("ROLL NO: %d NAME: %s MARKS OBTAINED :%d\n",st1[i].roll,st1[i].name,st1[i].marks);
 }*/

for(i=0;i<2;i++)
{
 if(max<st1[i].marks)
 {
  max=st1[i].marks;
  j=i;
 }
}
printf("THE HIGHEST MARKS ARE OBTAINED BY :MR/MRS %s",st1[j].name);

 getch();
}