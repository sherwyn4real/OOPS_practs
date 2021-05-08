#include<iostream>
using namespace std;

class complex
{
	int real,imag;
	
	public:
			complex(int x,int y)
			{
				real=x;
				imag=y;
			}
			complex()
			{
			}
			 friend complex operator +(complex,complex);
			
			void show()
			{
				cout<<real<<" +j"<<imag<<endl;
			}
			
};
	
complex operator +(complex x,complex y)
{
	complex t;
	t.real=x.real+y.real;
	t.imag=x.imag+y.imag;
	
	return t;
	
	//return complex((real + x.real),(imag+ x.imag)); can be used in place of a temp object
	
	
}

int main()
{
	complex a(10,20);
	complex b(30,40);
	a.show();
	b.show();
	
	complex c=operator +(a,b);
		
	c.show();
	return 0;
}
