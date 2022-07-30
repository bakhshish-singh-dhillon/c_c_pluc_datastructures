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
	int a;
	cars c1;
	c1.put_data(); 
	cars c2(456);
	c2.put_data();
	cout<<"Enter the number "; 	//Dynamic intialization
	cin>>a;						//of an
	cars c3(a);					//Object
	c3.put_data();
	getch();
	return 0;
}