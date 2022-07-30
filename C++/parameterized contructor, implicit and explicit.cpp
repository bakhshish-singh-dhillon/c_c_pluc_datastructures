#include<iostream.h>
#include<conio.h>
class cars
{
	int number;
	public:
	cars()
	{
		number=0000;
	}
	cars (int num)
	{
		number=num;
	}
	void get_data()
	{
		cout<<"Enter number of car ";
		cin>>number;
	}
	void put_data()
	{
		cout<<"Number of car is "<<number<<endl;
	}
};
int main()
{
	int a=123;
	cars c1;
	c1.put_data(); 
	cars c2(456);//implicit call to constructor
	c2.put_data();
	cars c3(a);//implicit call to constructor
	c3.put_data();
	c3=c2;//explicit call to constructor
	c3.put_data();
	getch();
	return 0;
}