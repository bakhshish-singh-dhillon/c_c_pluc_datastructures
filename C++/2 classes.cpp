#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	int b;
	public:
	void sum()
	{
		int sum;
		cout<<"Enter two numbers";
		cin>>a>>b;
		sum=a+b;
		cout<<"The answer is "<<sum<<endl;
	}
};
class xyz
{
	int x;
	int y;
	public:
	void multi()
	{
		int multi;
		cout<<"Enter two numbers";
		cin>>x>>y;
		multi=x*y;
		cout<<"The answer is "<<multi<<endl;
	}
};
int main()
{
    abc add;
	xyz product;
	add.sum();	
	product.multi();
	getch();
	return 0;	
}