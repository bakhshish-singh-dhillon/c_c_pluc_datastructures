#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,m,n,a[10][10],b[10][10],sum[10][10],sub[10][10];
    printf("Enter row and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter the value of first matrix: ");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
	    scanf("%d",&a[i][j]);	
	    }
    }
    printf("Enter the value of second matrix: ");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
	    scanf("%d",&b[i][j]);	
	    }
    }
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
	    sum[i][j]=a[i][j]+b[i][j];
		sub[i][j]=a[i][j]-b[i][j];	
	    }
    }
    printf("\nThe sum matrix is: \n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
	    printf("%d\t",sum[i][j]);	
	    }
	    printf("\n");
    }
    printf("\nThe subtraction matrix is: \n");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
	    printf("%d\t",sub[i][j]);	
	    }
	    printf("\n");
    }
}
    