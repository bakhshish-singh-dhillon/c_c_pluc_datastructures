#include<iostream.h>
#include<conio.h>
int main()
{
	int a[10],temp,i,j,loc;
	for(i=0;i<10;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<10;i++)
	{
		temp=a[i];
		for(j=i+1;j<10;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				loc=j;
			}
		}
		a[loc]=a[i];
		a[i]=temp;
	}
	for(i=0;i<10;i++)
	{
		cout<<a[i]<<endl;
	}
}