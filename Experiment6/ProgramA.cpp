#include<iostream>
using std::cout ;

template<class T>
void swap(T &a, T &b)
{
	T temp=a;
	a=b;
	b=temp;
}

int main()
{	
	int a=4,b=90;
	float c=1.4,d=3.95;
	
	cout<<"Before Swap:";
    cout<<"\na="<<a<<"\tb="<<b;
    cout<<"\nc="<<c<<"\td="<<d;
	swap(a,b);
	swap(c,d);
	
	cout<<"\n\nAfter Swap:";
    cout<<"\na="<<a<<"\tb="<<b;
    cout<<"\nc="<<c<<"\td="<<d;
	
	cout<<"\n";
	
	return 0;
} 
