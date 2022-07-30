#include<iostream.h>
#include<conio.h>
union teacher
{
	char name[100];
	int maths,sst,evs;	
};
void avg(teacher t)
{
	float avg=(t.maths+t.evs+t.sst)/3;
	cout<<"The average is "<<avg<<endl;;
}
int main()
{
	teacher t[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"Enter name of teacher no:"<<i+1<<endl;
		cin>>t[i].name;
		cout<<"Enter the marks of 3 subjects of "<<t[i].name<<endl;
		cin>>t[i].maths>>t[i].evs>>t[i].sst;
		avg(t[i]);
	}
	getch();
	return 0;
}