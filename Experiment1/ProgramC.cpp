#include<iostream>
using namespace std;

class num
{
	int x;
	public:num()
		{
			x=0;
		}
		
		friend istream & operator>>(istream &p, num &a)
		{	
			cout<<"Enter value:"<<endl;
			p>>a.x;
			return(p);
		}
		
		friend ostream & operator<<(ostream &p, num &a)
		{
			p<<a.x;
			cout<<endl;
			return(p);
		}
	};
		
int main()
{
	num a,b;
	
	cin>>a;
	
	cout<<"a="<<a;
	
	cin>>b;
	cout<<"b="<<b;
	
	return 0;
}
