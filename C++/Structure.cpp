#include<iostream.h>
#include<conio.h>
struct student
	{
		char name[10];
		int rollno;
		char subject[10];
		int marks;
	};
int main()
	{
		student s1;
		cout<<"Enter the name, rollno.,subject and marks"<<endl;
		cin>>s1.name>>s1.rollno>>s1.subject>>s1.marks;
		cout<<s1.name<<"'s roll no. is "<<s1.rollno<<" and got "<<s1.marks<<" marks in "<<s1.subject;
		getch();
		return 0;
	}