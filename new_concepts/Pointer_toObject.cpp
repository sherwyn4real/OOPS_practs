#include<iostream>
using namespace std;

class sample
{
	int a;
	public: sample()
			{
				a=10;
			}
			void add(int x)
			{
				a=a+x;
			}
			friend void show(sample &n)
			{
				int sample::*p=&sample::a;
				cout<<n.*p<<endl;
				
			}
			
};



int main()
{
	sample o,b;
	void (sample::*p)(int)=&sample::add;

	sample *c=&b;
	(c->*p)(5);
	
	show(o);
	show(b);
	
}
