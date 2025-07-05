
#include<stdio.h>
#include<conio.h>
void main()
{	int a[3][3],b[3][3],c[3][3],i,j;
	clrscr();
	printf("\nenter 2 D Array A\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter %d Row & %d Colum :",i,j);
			scanf("%d",&a[i][j]);
		}
	}

	printf("\nEnter 2 D array B\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter %d Row & %d Colum :",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n 2 D Array a is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",a[i][j]);

		}
		printf("\n");
	}

	printf("\n 2 D Array b is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",b[i][j]);

		}
		printf("\n");
	}

	printf("\n 2 D array c is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\t%d",c[i][j]);

		}
		printf("\n");
	}
	getch();
}
