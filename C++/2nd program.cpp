#include<iostream.h>
#include<conio.h>
int main()
{
	char name[10],subject[10];
	int rollno,marks;;
	cout<<"Enter student's name, roll no. , subject and marks "<<endl; 
	cin>>name>>rollno>>subject>>marks;
	cout<<name<<"'s rollno. is "<<rollno<<" and got "<<marks<<" marks in "<<subject;
	getch();
	return 0;
}