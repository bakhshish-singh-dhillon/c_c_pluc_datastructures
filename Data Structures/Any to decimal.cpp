#include<iostream.h>
#include<conio.h>
int main()
{
		int num, input,temp,i,j,ans[10],rem;

	{
	cout<<"Enter the decimal number to be converted:  ";
	cin>>num;
	cout<<"1.Binary\n2.Octal\n3.Hexadecimal\nEnter the system from which the number is to be converted: ";
	cin>>input;
	switch(input)
	{
		case 1:
		{
			rem=0;
			temp=num;
			i=0;
			while(!(temp==0))
			{
				ans[i]=temp%10;
				temp=temp/10;
				for(j=0;j<i;j++)
				{
				ans[i]=ans[i]*2;	
				}
				rem=rem+ans[i];
				i++;						
			}
			cout<<rem;
			break;
		}
		case 2:
		{
			rem=0;
			temp=num;
			i=0;
			while(!(temp==0))
			{
				ans[i]=temp%10;
				temp=temp/10;
				for(j=0;j<i;j++)
				{
				ans[i]=ans[i]*8;	
				}
				rem=rem+ans[i];
				i++;						
			}
			cout<<rem;
			break;
		}
		case 3:
		{
		rem=0;
			temp=num;
			i=0;
			while(!(temp==0))
			{
				ans[i]=temp%10;
				temp=temp/10;
				for(j=0;j<i;j++)
				{
				ans[i]=ans[i]*16;	
				}
				rem=rem+ans[i];
				i++;						
			}
			cout<<rem;
			break;
		}
	}
	}
	getch();
	return 0;
}