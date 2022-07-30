#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	ofstream fout;
	fout.open("Data.ppt");
	char ch[10],ch1[10];
	cout<<"Enter your name:- ";
	cin>>ch;
	
cout<<"Enter yourw Friend name:- ";
cin>>ch1;
	fout<<ch<<"\t"<<ch1;;
	fout.close();
	ifstream fin;
	fin.open("Data.ppt");
	while(fin.eof()!=1)
	{
		fin.getline(ch,4);
		cout<<ch;
		cout<<endl;
		getch();
	}
	fin.close();
	getch();
	return 0;
}