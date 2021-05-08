#include<iostream>
using namespace std;

class cent
{
	float c;
	
	public: cent()
			{
				c=0;
			}
			
			cent(float x)
			{
				c=x;
			}
			float getc()
			{
				return c;
			}
			
};

class met
{
	float m;
	
	public: met(cent &c)
			{
				m=c.getc()/100;
			}
			
			void display()
			{
				cout<<m<<endl;
			}
};



int main()
{
	 cent c;
	 float x;
	
	cout<<"Enter dimension in centimeters"<<endl;
	cin>>x;
	
	 c=x;
	
	met m=c;
	cout<<"The dimension in meters is"<<endl;
	m.display();
	
	return 0;
}
	
