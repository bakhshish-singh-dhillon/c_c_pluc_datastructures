#include<iostream.h>
#include<conio.h>
int count=0;
class alpha
{
	public:
	alpha()
	{
		count++;
		cout<<"Object created no: "<<count<<endl;
	}
	~alpha()
	{
		cout<<"Object destroyed no: "<<count<<endl;
		count--;		
	}
};
int main()
{
	{
	cout<<"We are in main"<<endl;
	alpha a1,a2,a3,a4;
	{
		cout<<"We are in block 1"<<endl;
	    alpha a5;
	}
	{
		cout<<"We are in block 2"<<endl;
	    alpha a6;
	}
	cout<<"We are back in Main"<<endl;
	}
	getch();
	return 0;
}