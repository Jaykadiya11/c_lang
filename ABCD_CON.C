#include<stdio.h>
#include<conio.h>
void main()
{	int i,j;
	clrscr();
	for(i=75;i>=65;i--)
	{
		for(j=65;j<=i;j++)
		{
			printf(" %c",j);
		}
		printf("\n");
	}
	getch();
}