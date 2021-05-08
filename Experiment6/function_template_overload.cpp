#include<iostream>
#include<string.h>

using namespace std;

template<class T>
void display(T a)
{
	cout<<"Template "<<a<<endl;
}

void display(int a)
{
	cout<<"normal "<<a<<endl;
}

int main()
{
	display(33);
	display(33.5);
	display("fgg");
	return 0;
}
