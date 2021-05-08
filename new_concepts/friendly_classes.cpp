#include<iostream>
using namespace std;

class dude
{
	int a,b;
	
	public:dude(int x,int y)
	{
		a=x; b=y;
	}
	friend class boii;    //Now boii class has access to all emebrs of class dude
};

class boii
{ 
	int b;
	
	public: void show(dude d)
			{
				cout<<"a="<<d.a<<" and b="<<d.b<<endl;
	}
};

int main()
{
	
	dude y(20,30);
	
	boii c;
	
	
	c.show(y);
	
	return 0;
}
