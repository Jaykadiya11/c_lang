#include<stdio.h>
#include<conio.h>
void main()
{	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	printf("\nenter 2 D Array A\n");
	for(i=0;i<3;i++);
	{
		for(j=0;j<3;j++);
		{
			printf("enter %d Row & %d Colum :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++);
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\nenter 2 D Array Is\n");
	for(i=0;i<3;i++);
	{
		for(j=0;j<3;j++);
		{
			printf("\t%d",a[i][j]);

		}
		printf("\n");
	}

	printf("\nenter 2 D Array c\n");
	for(i=0;i<3;i++);
	{
		for(j=0;j<3;j++);
		{
			printf("\t%d",a[i][j]);

		}
		printf("\n");
	}
	getch();
}
