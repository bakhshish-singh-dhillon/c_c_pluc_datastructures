#include<iostream.h>
#include<conio.h>
struct name
{
 float a;
 int b;
 	
};
int main()
{
	name n1, *p;
	p=&n1;
	cout<<"Enter integer: ";
	cin>>(*p).a;
	cout<<"Enter number: ";
	cin>>p->b;
	cout<<"The number is "<<(*p).a<<" The integer is "
    <<p->b<<endl;
    cout<<&n1<<endl<<&(n1.a)<<endl<<&n1.b<<endl;
    p++;
    cout<<sizeof(double)<<endl<<sizeof(char)<<endl;
    cout<<p;
    getch();
    return 0;
}