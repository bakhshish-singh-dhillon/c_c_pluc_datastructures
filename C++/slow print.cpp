#include<iostream.h>
#include<conio.h>
 int main()
 {
 	char name[10],c;int i,j;
 	cout<<"Enter name:";
 	cin>>name;
 	for(i=0;i<8;i++)
 	{
	 	c=name[i];
	 	cout<<c;
 	for(j=0;j<1500;j++)
 	{
	 	cout<<" \b";
    }
    }
 	getch();
 	return 0;
 }