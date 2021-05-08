#include<iostream>
using namespace std;

int main()
{
	int i=1;
	
	cout.precision(3);
	cout.fill('<');
	for(i=1;i<=6;i++)
	{
		cout.width(5);
		cout<<i;
		cout.width(10);
		cout<<1.0/i<<endl;
		if(i==3)
			cout.fill('>');
	}
return 0;
}
