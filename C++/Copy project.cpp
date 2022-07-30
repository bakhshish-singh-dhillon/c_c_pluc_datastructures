#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	ofstream fout;
	fout.open("data.txt");
	char ch[10],ch2[80];
	cout<<"Enter your name:- ";
	cin>>ch;
	fout<<ch;
	cout<<"Enter your Friend name:- ";
	cin>>ch;
	fout<<"\n"<<ch;
	fout.close();
	ifstream fin;
	fout.open("data1.txt");
	fin.open("data.txt");
	while(fin.eof()!=1)
	{
	
		fin.getline(ch,80);
		fout<<ch<<"\n";
	}
	fout.close();
	fin.close();

	fin.open("data1.txt");
fin.seekg(0,ios::beg);
	while(fin)
	{

		fin.getline(ch2,80);
		cout<<ch2;
		cout<<endl;
		
	}
	fin.close();
	getch();
	return 0;
}