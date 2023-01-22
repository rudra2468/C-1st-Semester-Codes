#include<stdio.h>
#include<conio.h>

void main()
{
 clrscr();
 int row,col,i,j;
 int arr1[10][10],arr2[10][10],mult[10][10];
 printf("ENTER THE NO FO ROWS :");
 scanf("%d",&row);
 printf("ENTER THE NO OF COLUMNS :");
 scanf("%d",&col);
 printf("ENTER THE ELEMENTS IN 1ST MATRIX :\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("ENTER ELEMENTS :%d %d :",i,j);
   scanf("%d",&arr1[i][j]);
  }
 }

 printf("ENTER THE ELEMENTS IN 2ST MATRIX :\n");
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   printf("ENTER ELEMENTS :%d %d :",i,j);
   scanf("%d",&arr2[i][j]);
  }
 }

 //addition
 for(i=0;i<row;i++)
 {
  for(j=0;j<col;j++)
  {
   mult[i][j] = arr1[i][j] * arr2[i][j];
  }
 }

 //printing
 printf("\nTHE SUM OF THE MATRICES IS :\n");
 for(i=0;i<row;i++)
 {
  printf("\n\n");
  for(j=0;j<col;j++)
  {
   printf("%d  ",mult[i][j]);
  }
 }
 getch();
}
