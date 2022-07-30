//Scope resolution and defination outside class
#include<iostream.h>
#include<conio.h>
 class student
 {
 	private:
 	int rollno;
 	char name[10];
 	public:
 	void get_data(int i);
 	void put_data(int i);
};
void student::get_data(int i)
 	{
	 	cout<<"Enter Name of student no. "<<i<<":";
	 	cin>>name;
	 	cout<<"Enter rollno of student no. "<<i<<":";
	 	cin>>rollno;
	 }
void student::put_data(int i)
 	{
	 	cout<<"Name of student no. "<<i<<" is: "<<name<<endl;
	 	cout<<"Rollno. of student no. "<<i<<" is: "<<rollno<<endl;
 	}
 int main()
 {
 	int j;
 	cout<<"Enter number of students:";
 	cin>>j;
 	student s[j];int i; 
 	for(i=0;i<j;i++)
 	{
 	s[i].get_data(i+1);
 	}
 	for(i=0;i<j;i++)
 	{
 	s[i].put_data(i+1);
 	}
 	getch();
 	return 0;
 }