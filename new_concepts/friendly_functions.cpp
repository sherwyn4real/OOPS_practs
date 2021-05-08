#include<iostream>
using namespace std;

class dude
{
	int data,beta;
	
	
	public:void access(int x,int y)
	{
		data=x;
		beta=y;
	}
			friend float f(dude);   //friendly function definition. It can be declared in any number of classes	
			friend void f(dude,dude); //friendly function overload
};
void f(dude a, dude b)
{
	cout<<"total_sum="<<a.data+a.beta+b.data+b.beta<<endl;
}

float f(dude d)
{	
	return (d.data+d.beta)/2.0;
	
}

int main()
{
	dude a,b;
	
	a.access(20,30);
	b.access(10,10);
	
	f(a,b);
	cout<<"The average is "<<f(a)<<endl;
	
	return 0;
}
	
	
	
	
	
	
