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
	cars c1;
	c1.put_data();
	c1.get_data();
	c1.put_data();
	getch();
	return 0;
}