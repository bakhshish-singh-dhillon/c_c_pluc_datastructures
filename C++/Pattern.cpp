#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,m=1,n,temp,num;
	cout<<"Enter the number:";
	cin>>num;
	for(i=1;i<=num;i++)
	{
		n=0;temp=m;
		for(j=i;j<=num;j++)
		{
			cout<<"\t";
		}
		while(n==0)
		{
			if(m==((temp*2)-1))
			{
				n=1;
				while(m>=temp)
				{
				cout<<m<<"\t";
				m--;
				}
			}
			else
			{
				cout<<m<<"\t";
				m++;
			}
		}
		m=temp+1;
		cout<<endl;
	}
	getch();
	return 0;
}