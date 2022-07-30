#include<iostream.h>
#include<conio.h>
#include<string.h>
void alpha(int a);
class conversion
{
	private:
	int num,rem,i,j,ans[20];
	int temp;
	public:
	int dec_to_bi(int);
	int dec_to_oct(int);
	int dec_to_hexadec(int);
	int bi_to_dec(int);
	int oct_to_dec(int);
	int hexadec_to_dec(int[],int);	
};

int conversion::dec_to_bi(int num)
	{
			temp=num;
			i=0;
			while(!(temp<2))
			{
				rem=temp%2;
				temp=temp/2;
				ans[i]=rem;
				cout<<ans[i];
				i++;
			}
			ans[i]=temp;
			temp=0;
			for(j=i;j>=0;j--)
			{
			temp=temp*10;	
			temp=temp+ans[j];	
			}
			return temp;
	}
		
int conversion::dec_to_oct(int num)
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
			temp=0;
			for(j=i;j>=0;j--)
			{
			temp=temp*10;	
			temp=temp+ans[j];	
			}
			return temp;
	}
	
int conversion::dec_to_hexadec(int num)
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
			return ans[i];
	}
	
int conversion::bi_to_dec(int num)
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
			return rem;
	}
	
int conversion::oct_to_dec(int num)
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
			return rem;
	}
int conversion::hexadec_to_dec(int temp[],int i)
	{
			rem=0;
			int temp2=i;
			while(i>=0)
			{
				for(j=temp2;j>i;j--)
				{
				temp[i]=temp[i]*16;	
				}
				rem=rem+temp[i];
				i--;					
			}
			return rem;
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

int main()
{
	char ch;
	char  hexa[10];
	conversion element;
	int input,num,temp[10],i,j;
	conversion:
	{
	cout<<"Do you want to convert:-\n Decimal to\n1.Binary\n2.Octal\n3.Hexadecimal\n";
	cout<<"\t\t\tOR\n Binary to\n4.Decimal\n5.Octal\n6.Hexadecimal\n";
	cout<<"\t\t\tOR\n Octal to\n7.Decimal\n8.Binary\n9.Hexadecimal\n";
	cout<<"\t\t\tOR\n Hexadecimal to\n10.Decimal\n11.Binary\n12.Octal\n";
	cout<<"Answer with a number(1-12):";
	cin>>input;
	cout<<"Enter the number to be converted:  ";
	
	if(input<10)
	{
	cin>>num;
	}
	else
	{
	scanf("%s",hexa);
	j=strlen(hexa);
	for(i=0;i<j;i++)
	{
	if((int)hexa[i]<=57)
	{
	temp[i]=(int)hexa[i]-48;
	}
	else 
	{
	temp[i]=(int)hexa[i]-87;
	}
	}	
	}
	switch(input)
	{
		case 1:
		{
			cout<<"The binary coversion for "<<num<<" is: "<<element.dec_to_bi(num);
			break;
		}
		case 2:
		{
			cout<<"The octal coversion for "<<num<<" is: "<<element.dec_to_oct(num);
			break;
		}
		case 3:
		{
			cout<<"The hexadecimal coversion for "<<num<<" is: ";
			element.dec_to_hexadec(num);
			break;
		}
		case 4:
		{
			cout<<"The decimal coversion for "<<num<<" is: "<<element.bi_to_dec(num);
			break;
		}
		case 5:
		{
			cout<<"The octal coversion for "<<num<<" is: "<<element.dec_to_oct(element.bi_to_dec(num));
			break;
		}
		case 6:
		{
			cout<<"The hexadecimal coversion for "<<num<<" is: "<<element.dec_to_hexadec(element.bi_to_dec(num));
			break;
		}
		case 7:
		{
			cout<<"The decimal coversion for "<<num<<" is: "<<element.oct_to_dec(num);
			break;
		}
		case 8:
		{
			cout<<"The binary coversion for "<<num<<" is: "<<element.dec_to_bi(element.oct_to_dec(num));
			break;
		}
		case 9:
		{
			cout<<"The hexadecimal coversion for "<<num<<" is: "<<element.dec_to_hexadec(element.oct_to_dec(num));
			break;
		}
		case 10:
		{
			cout<<"The decimal coversion for ";
			printf("%s",hexa);
			cout<<" is: "<<element.hexadec_to_dec(temp,j-1);
			break;
		}
		case 11:
		{
			cout<<"The binary coversion for "<<num<<" is: "<<element.dec_to_bi(element.hexadec_to_dec(temp,j-1));
			break;
		}
		case 12:
		{
			cout<<"The octal coversion for "<<num<<" is: "<<element.dec_to_oct(element.hexadec_to_dec(temp,j-1));
			break;
		}
	}
	}
	cout<<endl<<endl<<endl<<endl<<"Do you want to convert another number? Y/N:"<<endl;
	ch=getch();
	if(ch=='Y'||ch=='y')
	{
		goto conversion;
	}
	return 0;
}