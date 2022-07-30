#include<iostream.h>
#include<conio.h>
#include<fstream.h>
int main()
{
	char string[80];
	cout<<"Enter a string ";
	cin>>string;
	int len=strlen(string);
	fstream file,file2;
	file.open("text", ios::in|ios::out);
	for(int i=0;i<len;i++)
	file.put(string[i]);
	file2.open("text", ios::in);
	file2.seekg(0);
	char ch;
	while(file2)
	{
		cout<<"sdvsdvsdvs";
		file2.get(ch);
		cout<<ch;
	}
	
	
	getch();
	return 0;
}