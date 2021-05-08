#include<iostream>
using namespace std;
class num
{
	int x;
	public: num()
			{
				x=10;
			}
			friend istream & operator>> (istream &p,num &q)
			{
				cout<<"Enter value"<<endl;
				p>>q.x;
				return(p);
			}
			
			friend ostream & operator<<(ostream &p,num &q)
			{
				p<<q.x;
				return(p);
			}
			
};



int main()
{
	num a,b;
	cin>>a;
	cin>>b;
	cout<<a;
	cout<<endl;
	cout<<b;
	
	return 0;
}
