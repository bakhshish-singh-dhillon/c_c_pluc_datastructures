#include<iostream.h>
#include<conio.h>
union student
{
	char name[10];
};
int main()
{
	student s1;
	cout<<"Enter Name";
	cin>>s1.name>>
	cout<<"Name is "<<s1.name;
	getch();
	return 0;
}
