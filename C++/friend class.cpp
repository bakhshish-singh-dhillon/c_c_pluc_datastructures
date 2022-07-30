#include<iostream.h>
#include<conio.h>
class x
{
	int x, y;
	public:
	void funx (int xx,int yy)
	{
		x=xx;
		y=yy;
	}
	friend class y;
};
class y
{
	public:
	
		void fun(x objx)
		{
			
			cout<<"x="<<objx.x;
			cout<<"y="<<objx.y;
		}
	
};
int main()
{
	x objx;
	objx.funx(5,10);
	y objy;
	objy.fun(objx);
	getch();
	return 0;
}