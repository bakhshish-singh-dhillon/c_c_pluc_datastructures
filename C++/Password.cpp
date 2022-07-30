#include<iostream.h>
#include<conio.h>
int main()
{
	char pass[10];
	for(int i=0;i<10;i++)
	{
		pass[i]=getch();
		cout<<"*";
	}
	cout<<endl<<pass;
	getch();
	return 0;
}