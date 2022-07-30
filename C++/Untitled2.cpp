#include<iostream.h>
#include<conio.h>
int main()
{
	int i,j,k=1,l;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			cout<<"\t";
		}
        while(k<=i)
		{
			cout<<k<<"\t";
			k=k+1;
		}
		cout<<endl;
	}
	getch();
	return 0;
}