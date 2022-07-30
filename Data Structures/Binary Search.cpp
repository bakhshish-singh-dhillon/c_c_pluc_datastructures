#include<iostream.h>
#include<conio.h>
int main()
{
	int arr[10],i,item,lb=0,ub=9,mid,flag=0;
	cout<<"Enter 9 numbers";
	for(i=0;i<9;i++)
	cin>>arr[i];
	cout<<"Enter the number you want to search:";
	cin>>item;
	while(lb<=ub)
	{
		mid=(ub+lb)/2;
		if(arr[mid]==item)
		{
			flag=1;
			break;
		}
		else if(arr[mid]<item)
		{
			lb=mid+1;
		}
		else
		{
			ub=mid-1;
		}
	}
	if(flag==1)
	{
		cout<<"The number "<<item<<" is at "<<mid+1<<" location";
	}
	else
	{
		cout<<"Sorry";
	}
	getch();
	return 0;
}