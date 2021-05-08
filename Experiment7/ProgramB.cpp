#include<iostream>
using namespace std;

void func(int x)
{
	try
	{
		if(x<0)
			throw x;
			
		else if(x==0)
			throw 0.0;
			
		else
			throw 'x';
	}
	
	catch(int x)
		{
			cout<<"Caught an integer\n"<<endl;
		}
		
	catch(double x)
		{
			cout<<"Caught a double\n"<<endl;
		}
		
	catch(char x)
		{
			cout<<"Caught a character\n"<<endl;
		}
}
	
	

int main()
{
	  int x;
	
	cout<<"The value of variable, say x will be either < 0 or =0 or > 0.\nThe multiple catch statements will detect each case\n"<<endl;
	cout<<"x=-1"<<endl;
	func(x=-1);
	
	cout<<"x=0"<<endl;
	func(x=0);
	
	cout<<"x=1"<<endl;
	func(x=1);	
	
	return 0;
}
	
