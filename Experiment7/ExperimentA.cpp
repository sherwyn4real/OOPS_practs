#include<iostream>
using namespace std;

void divide(float a, float b)
{	try
	{
		if(b==0)
		throw b;
		
		else
			cout<<"The result is:"<<a/b<<endl;
	}
		catch(float )
		{
			cout<<"Exception caught inside function(Division by 0)"<<endl;
			throw;
		}
}	

int main()
{
	float a,b;
	
	cout<<"Enter 2 elements to perform division"<<endl;
	cout<<"Numerator:";
	cin>>a;
	cout<<"\nDenominator:";
	cin>>b;
	cout<<endl;
	
	try
	{
		divide(a,b);
	}
	
	catch(float)
	{
		cout<<"\nException Caught inside main"<<endl<<endl;
	}
	
	return 0;
}
