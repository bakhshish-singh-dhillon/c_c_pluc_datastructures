//Class with 2 functions
#include<iostream.h>
#include<conio.h>
 int main()
 {
 	char name[10];int i;
 	cout<<"Enter name:";
 	cin>>name;
 	for(i=0;i<10;i++)
 	{
	 	if(!((name[i]>='A')&&(name[i]<='z')))
	 	{
	 	goto error;	
 		}	 	
	 }
	 error:
	 {
 	cout<<"You have entered an invalid name";	
 	}
 	getch();
 	return 0;
 }