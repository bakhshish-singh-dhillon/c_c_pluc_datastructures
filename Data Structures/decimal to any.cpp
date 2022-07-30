#include<iostream.h>
#include<conio.h>
void alpha(int);
int main()
{
	int num, input,rem,temp,i,j,ans[10];
	conversion:
	{
	cout<<"Enter the decimal number to be converted:  ";
	cin>>num;
	cout<<"1.Binary\n2.Octal\n3.Hexadecimal\nEnter the system in which the number is to be converted: ";
	cin>>input;
	switch(input)
	{
		case 1:
		{
			temp=num;
			i=0;
			while(!(temp<2))
			{
				rem=temp%2;
				temp=temp/2;
				ans[i]=rem;
				i++;
			}
			ans[i]=temp;
			cout<<"The binary coversion for "<<num<<" is: ";
			for(j=i;j>=0;j--)
			{
			cout<<ans[j];	
			}
			break;
		}
		case 2:
		{
			temp=num;
			i=0;
			while(!(temp<8))
			{
				rem=temp%8;
				temp=temp/8;
				ans[i]=rem;
				i++;
			}
			ans[i]=temp;
			cout<<"The octal coversion for "<<num<<" is: ";
			for(j=i;j>=0;j--)
			{
			cout<<ans[j];	
			}
			break;
		}
		case 3:
		{
			temp=num;
			i=0;
			while(!(temp<16))
			{
				rem=temp%16;
				temp=temp/16;
				ans[i]=rem;
				i++;
			}
			ans[i]=temp;
			cout<<"The Hexa coversion for "<<num<<" is: ";
			for(j=i;j>=0;j--)
			{
			if(ans[j]>9)
			{
			alpha(ans[j]);
			}
			else
			{
			cout<<ans[j];	
			}
			}
			break;
		}
	}
	}
	cout<<endl<<endl<<endl<<endl<<"Do you want to convert another number? Y/N:"<<endl;
	if(getch()=='Y'||getch()=='y')
	{
		goto conversion;
	}
	getch();
	return 0;
}
void alpha(int a)
{
	if(a==10)
	{
		cout<<"A";
	}
	else if(a==11)
	{
		cout<<"B";
	}
	else if(a==12)
	{
		cout<<"C";
	}
	else if(a==13)
	{
		cout<<"D";
	}
	else if(a==14)
	{
		cout<<"E";
	}
	else if(a==15)
	{
		cout<<"F";
	}
}
