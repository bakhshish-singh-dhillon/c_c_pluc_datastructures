#include<iostream.h>
#include<conio.h>
struct time
{
	int minutes,hours;	
};
int main()
{
	struct time t;
	cout<<"Enter the hours"<<endl;
	cin>>t.hours;
	cout<<"Enter minutes"<<endl;
	cin>>t.minutes;
	if(t.minutes>59)
	{
		t.hours=t.hours+t.minutes/60;
		t.minutes=t.minutes%60;
	}
	cout<<"The time is "<<t.hours<<" hours "<<t.minutes<<" minutes"<<endl;
	getch();
	return 0;
}