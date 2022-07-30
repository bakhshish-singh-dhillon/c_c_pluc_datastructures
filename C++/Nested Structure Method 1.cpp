#include<iostream.h>
#include<conio.h>
struct student
{
	char name[10];
	int rollno;
	struct marks
	{
		int cpp;
		int maths;
	}
};
marks m1;
int main()
{
	
	student s1;
	cout<<"Enter Name, Roll no., and marks of CPP and maths "<<endl;
	cin>>s1.name>>s1.rollno>>s1.m1.cpp>>s1.m1.maths;
	cout<<s1.name<<"'s roll no. is "<<s1.rollno<<" and marks in cpp and maths aa "<<s1.m1.maths<<" and "<<s1.m1.cpp;
	getch();
	return 0;
}