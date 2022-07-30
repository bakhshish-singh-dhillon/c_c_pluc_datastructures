#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,arr[10],temp;
	cout<<"Enter 10 elements";
	for(i=0;i<9;i++)
	{
	cin>>arr[i];
	}
	for(i=9;i>=0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for(i=0;i<9;i++)
	cout<<arr[i]<<endl;
	getch();
	return 0;
}