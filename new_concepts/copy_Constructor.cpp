#include<iostream>
using namespace std;

class sample
{
	int a,b;
	public: sample(sample&  q)
			{
				a=q.a; b=q.b;
			}
			
			sample(int x, int y=20)
			{
				a=x; b=y;
			}
			
		void output()
		{
			cout<<a<<" "<<b<<endl;
		}
	};
	
	int main()
	{
		int p;
		cout<<"enter p"<<endl;
		cin>>p;
		
		sample y(p);
		
		sample z(y);
		
		y.output();
		z.output();
	return 0;
	
}
