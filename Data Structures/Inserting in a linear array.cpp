#include<iostream.h>
#include<conio.h>
int main()
{
	int n;
	cout<<"Enter the size of array"<<endl;
	cin>>n;
	int a[n], element, i, k;
	cout<<"Enter "<<n<<" values"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter thhe position for new element"<<endl;
	cin>>k;
	for(i=n-1;i>=k;i--)
	{
		a[i+1]=a[i];
	}
	cout<<"Enter new element"<<endl;
	cin>>element;
	a[k]=element;
	for(i=0;i<n+1;i++)
	{
		cout<<a[i]<<endl;
	}
} 