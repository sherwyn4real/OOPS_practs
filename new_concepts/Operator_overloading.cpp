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
			 complex operator +(complex);
			
			void show()
			{
				cout<<real<<" +j"<<imag<<endl;
			}
			
};
	
complex complex ::operator +(complex x)
{
	/*complex t;
	t.real=real+x.real;
	t.imag=imag+x.imag;
	
	return t;
	*/
	return complex((real + x.real),(imag+ x.imag)); //can be used in place of a temp object
	
	
}

int main()
{
	complex a(10,20);
	complex b(30,40);
	cout<<"The two complex numbers are:"<<endl;
	a.show();
	b.show();
	
	cout<<endl;
	complex c=a.operator +(b);
	
	cout<<"The sum of the two complex numbers is:"<<endl;	
	c.show();
	return 0;
}
