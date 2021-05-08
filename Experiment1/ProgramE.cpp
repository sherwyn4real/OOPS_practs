#include<iostream>
using namespace std;

class vector 
{
	int x,y,z;

	public: vector()
		{
			x=y=z=0;
		}
			
			friend istream & operator>>(istream &c, vector &g)
			{
				cout<<"Enter magnitudes at directions i,j and k respectively"<<endl;
					c>>g.x;
					c>>g.y;
					c>>g.z;
				return c;
			}
			
			friend ostream & operator<<(ostream &c, vector m) 
			{
				
				c<<m.x<<"i + "<<m.y<<"j + "<<m.z<<"k"<<endl;
					
				return c;
			}
			/*
			friend vector operator*(vector &a,int k)
			{
				for(int i=0;i<3;i++)
					a.x[i]=a.x[i]*k;
					
				return a;
			}
			
			vector operator +(vector &b)
			{
				vector temp;
				temp.x=new int[3];
				for(int i=0;i<3;i++)
					temp.x[i]=x[i]+b.x[i];
					
				return temp;
			}*/
			
			int operator==(vector &b)
			{
				if(x==b.x && y==b.y && z==b.z)
					return 1;
					
				else
					return 0;
				}
			~vector()
			{
				
			}
	};

int main()
{
	vector a,b,c;
	
	
	cout<<"Enter elements of the first vector:"<<endl;
	cin>>a;
	
	cout<<endl;
	cout<<"Enter elements of the second vector:"<<endl;
	cin>>b;
	
	cout<<endl;
	
	cout<<"The two vectors are:"<<endl;
	cout<<a;
	cout<<endl;
	cout<<b;
	
	cout<<endl;
	if(a==b)
		cout<<"The vectors are equal"<<endl;
		
	else
		cout<<"The vectors are not equal"<<endl;
	
	/*a=a*4;
	cout<<"The result of scalar multiplication of first vector by 4:"<<endl;
	cout<<a;
	
	c=a+b;
	cout<<"The result of addition of the vectors is:"<<endl;
	cout<<c;
	*/
	
	return 0;
}
