#include<iostream.h>
#include<conio.h>
class xyz; //forward declaration
class abc
{
	int a;
	int b;
	public:
	friend void dost(abc,xyz);
	friend void get_data(abc *m,xyz*n);
};
class xyz
{
	int x;
	int y;
	public:
	friend void dost(abc,xyz);
	friend void get_data(abc *m,xyz *n);
};
void get_data(abc *m,xyz *n)
	{
		cout<<"Enter value of a, b, x and y ";
		cin>>m->a>>m->b>>n->x>>n->y;
	}
void dost(abc a,xyz b)
{
	int sum;
	get_data(&a,&b);
    sum=a.a+a.b+b.x+b.y;
  	cout<<"The answer is "<<sum<<endl;	
}
int main()
{
    abc add;
	xyz product;
	dost(add,product);
	getch();
	return 0;	
}