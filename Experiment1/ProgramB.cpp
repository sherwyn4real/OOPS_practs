#include<iostream>
using namespace std;

class binary
{
	int z;
	public: binary()
		{
			z=5;
		}
		
		friend binary operator+(int b,binary &a)
		{
			binary temp;
			temp.z=b+a.z;
			return temp;
		}
		
		binary operator*(binary &a)
		{
			binary temp;
			temp.z=z*a.z;
			return temp;
		}
		
		binary operator-(int a)
		{
			binary temp;
			temp.z=z-a;
			return temp;
		}
		
		friend void show(binary &a)
		{
			cout<<a.z<<endl;
		}
	};
		
int main()
{
	binary x,y;
	
	cout<<"Before performing operations"<<endl;
	cout<<"x=";
	show(x);
	cout<<"y=";
	show(y);
	cout<<endl;
	
	x=5+y;
	x=x*y;
	x=y-5;
	cout<<"After performing following operations"<<endl;
	cout<<"x=5+y\nx=x*y\nx=y-5"<<endl<<endl;
			
	cout<<"We get:"<<endl;
	cout<<"x=";
	show(x);
	cout<<"y=";
	show(y);
	
	return 0;
}
