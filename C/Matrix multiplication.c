#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,k,m,n,o,p,a[10][10],b[10][10],c[10][10];
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
    printf("Enter row and columns for second matrix: ");
    scanf("%d %d",&o,&p);
    printf("Enter the value of second matrix: ");
    for(i=0;i<o;i++)
    {
    	for(j=0;j<p;j++)
    	{
	    scanf("%d",&b[i][j]);	
	    }
    }
    if(m==p)
	{
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
        {
        	c[i][j]=0;
        	for(k=0;k<n;k++)
        	{
	        	c[i][j]=c[i][j]+a[i][k]*b[k][j];
	        }  	
        }
    }
	}
	else
	{
		printf("Matrix could not be multiplied");
	}
	printf("The resultant matrix is\n");
	for(i=0;i<m;i++)
    {
    	for(j=0;j<p;j++)
    	{
	    printf("%d\t",c[i][j]);	
	    }
	    printf("\n");
    }
    getch();
    
}