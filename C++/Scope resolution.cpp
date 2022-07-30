#include<iostream.h>
#include<conio.h>
int number=5;
int main()
{
	int number=10;
	cout<<number<<endl;
	{
		int number=20;
		cout<<number<<endl;
		cout<<::number<<endl;
	}
	cout<<number;
	getch();
	return 0;
}