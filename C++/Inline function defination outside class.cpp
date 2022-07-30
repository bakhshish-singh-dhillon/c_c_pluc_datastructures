#include<iostream.h>
#include<conio.h>
class car
{
	private:
	char name[10];
	float speed;
	float distance;
	public:
    void input()
{
	cin>>speed;
	cin>>distance;
	cout<<"The time taken to cover the distance is:";
	time(speed,distance);
}
    void time(float s,float d)
{
	float result=d/s;
	cout<<result<<" hours";
}
};

int main()
{
	car c1;
	cout<<"Enter the speed and distance to be covered:";
	c1.input();
	getch();
	return 0;
}