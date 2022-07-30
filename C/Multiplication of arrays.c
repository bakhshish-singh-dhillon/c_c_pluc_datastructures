#include<stdio.h>
#include<conio.h>
void main()
{
	int i, j, k, a[2][2],b[2][2], mul[2][2];
	printf("Enter values of first matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter values of second matrix:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("The matrix after multiplication is:\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<2;k++)
			{
			mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}
		}
	}	
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	getch();	
}