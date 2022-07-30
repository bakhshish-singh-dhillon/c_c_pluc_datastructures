#include<iostream.h>
#include<conio.h>
int display(int a, int b=0)
{
	int c=a+b;
	cout<<c<<endl;
}
int main()
{
	display(10,20);
	display(10);
	display(20);
	getch();
	return 0;
}