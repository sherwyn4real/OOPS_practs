#include<iostream>
#include<math.h>
using namespace std;


int main()
{
	cout<<"VALUE*******SQRT_OF_VALUE"<<endl;

	int i=1;
	
	
	
	cout.fill('.');
	cout.precision(4);
	cout.setf(ios::showpoint);
	for(i=1;i<=10;i++)
	{	
		cout.setf(ios::internal,ios::adjustfield);
		cout.setf(ios::showpos);
		cout.width(5);
		cout<<i;
		cout.width(15);
		cout.setf(ios::right,ios::adjustfield);
		cout<<sqrt(i)<<endl;
	}

return 0;
}
