#include<iostream.h>
#include<conio.h>
class cars
{
	char name[10];
	static int count;
	public:
	void get_data()
	{
		cout<<"Enter name of car ";
		cin>>name;
		count++;
	}
	void put_data()
	{
		cout<<"Number of names added are "<<count<<endl;
	}
};
int cars::count;
int main()
{
	cars c1,c2,c3;
	c1.get_data();
	c2.get_data();
	c3.get_data();
	c1.put_data();
	c2.put_data();
	c3.put_data();
	getch();
	return 0;
}