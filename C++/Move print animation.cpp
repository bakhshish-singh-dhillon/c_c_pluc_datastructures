#include<iostream.h>
#include<conio.h>
#include<string.h>
 int main()
 {
 	char name[10],c;int i,j,k,length;
 	cout<<"Enter name:\n";
 	cin>>name;
 	length=strlen(name);
 	for(i=0;i<=20;i++)
 	{
	 cout<<name;	
 	for(j=0;j<1000;j++)
 	{
	 	cout<<" \b";
    }
    for(k=0;k<=length;k++)
    {
    cout<<"\b";	
    }
    cout<<"   ";
    }
 	getch();
 	return 0;
 }