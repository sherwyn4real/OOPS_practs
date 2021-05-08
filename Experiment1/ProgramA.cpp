#include<iostream>
using namespace std;

class unary
{	
	int x;
	public: unary(int n)
			{
				x=n;
			}
			
			int operator++()
			{
				return ++x;
			}
			
			int operator++(int) //dummy arg for postfix
			{
				return x++;
			}
			
			int operator--()
			{
				return --x;
			}
			
			int operator--(int) //dummy arg for postfix
			{
				return x--;
			}
			
			 void show(int x)
			{
				cout<<x<<endl;
				
			}
			
			int getnum()
			{
				return x;
			}
};

int main()
{	
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	
	unary a(n);
	
	
	int i=1;
	
	cout<<"Before pre increment: a=";
	cout<<a.getnum();
	
	cout<<endl;
	
	cout<<"Performing pre increment(increments first then prints):"<<endl;
	while(i++<=3)
		a.show(++a);
	
	cout<<endl;
	
	cout<<"Before post increment: a=";
	cout<<a.getnum();
	
	cout<<endl;
	i=1;
	cout<<"Performing post increment(prints first then increments):"<<endl;
	while(i++<=3)
		a.show(a++);
		
	
	cout<<endl;
	
	cout<<"Before pre decrement: a=";
	cout<<a.getnum();
	
	cout<<endl;
	i=1;
	cout<<"Performing pre decrement(decrements first then prints):"<<endl;
	while(i++<=3)
		a.show(--a);
	
	cout<<endl;
	
	cout<<"Before post decrement: a=";
	cout<<a.getnum();
	
	cout<<endl;
	i=1;
	cout<<"Performing post decrement(Prints first then decrements):"<<endl;
	while(i++<=3)
		a.show(a--);
		
	cout<<endl;
	 return 1;
}
	
