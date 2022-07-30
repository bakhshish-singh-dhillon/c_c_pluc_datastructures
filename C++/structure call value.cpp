#include<iostream.h>
#include<conio.h>
struct student
{
 char name[50];
 int roll;
 	
};
void display(struct student s);
int main()
{
    struct student s1;
    cout<<"Enter student's name: ";
    cin>>s1.name;
    cout<<"Enter roll number: ";
    cin>>s1.roll;
    display(s1);
    getch();
    return 0;
}
void display(struct student s)
{
	cout<<"Output Name: "<<s.name;
	cout<<"\nRoll number: "<<s.roll;
}