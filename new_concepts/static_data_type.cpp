#include<iostream>
using namespace std;

class dude
{
	int data;
	static int p;		//It automatically gets assigned to zero when object is created;
	
	public:void access(int x)
			{
				data=x;
				p++;
			}
			
			void show()
			{
				cout<<"data="<<data<<endl;
				cout<<"static="<<p<<endl;
			}
};

int dude::p;
int main()
{
	dude a,b,c;
	a.access(10);
	b.access(20);
	c.access(30);
	
	a.show();
	b.show();
	c.show();
	
	return 0;
}
	
