//Simple Class Program
#include<iostream.h>
#include<conio.h>
 class student
 {
 	private:
 	int rollno;
 	char name[10];
 	public:
 	void display()
 	{
	 	rollno=123;
	 	cout<<"Enter your name:";
	 	cin>>name;
	 	cout<<"Your rollno is:"<<rollno<<"\nYour name is:"<<name;
	 }
 };
 int main()
 {
 	student s1;
 	s1.display();
 	getch();
 	return 0;
 }