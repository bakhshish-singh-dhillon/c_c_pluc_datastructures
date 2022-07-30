#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<iomanip.h>
int main()
{
	float height[4]={175.5, 153.0, 167.25, 160.70	};
	ofstream outfile;
	outfile.open("aman.txt");
	outfile.write((char *)&height, sizeof(height));
	outfile.close();
	for(int i=0;i<4;i++)
	height[i]=0;
	ifstream infile;
	infile.open("aman.txt");
	infile.read((char *)&height, sizeof(height));
	for(int i=0;i<4;i++)
	{
		cout<<height[i]<<endl;
	}
	infile.close();
	getch();
	return 0;
}