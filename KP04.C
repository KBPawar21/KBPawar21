#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  char str[10];
  int i,j;
  clrscr();
  printf("\n\n\n\n\t");
  for(i=0;i<15;i++)
   scanf("\n\n\n\t%c",&str[i])      ;

   for(i=0;i<10;i++)
   {
	for(j=0;j<15;j++)
	{
		printf("%c",str[j]);
		}
	printf("\n");
	}
   getch();

}