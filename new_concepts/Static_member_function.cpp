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
			static void showp()
			{
				cout<<"static="<<p<<endl;
			}
				
			void show()
			{
				cout<<"data="<<data<<endl;
			}
};


int main()
{
	dude a,b,c;
	a.access(10);
	b.access(20);
	c.access(30);
	
	dude::showp();  //calling static member function;
	
	return 0;
}
