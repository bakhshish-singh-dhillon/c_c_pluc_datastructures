#include<iostream.h>
#include<conio.h>
int main()
{
	int arr[10];
	int item, flag=0, i;
	cout<<"Enter 10 numbers\n";
	for(i=0;i<10;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the number to be found:";
	cin>>item;
	for(i=0;i<10;i++)
	{
		if(item==arr[i])
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		cout<<"The item is found at "<<i+1<<"location";
	}
	else
	{
		cout<<"Item not found";
	}
	getch();
	return 0;
}