#include<iostream>
using namespace std;

class mat
{
	int m,n;
	int z[5][5];
	
	public: mat()
			{
				m=0;n=0;
			}
			
			mat(int m, int n)
			{
				this->m=m;
				this->n=n;
				create();
			}
			void create();
			void display();
			mat operator+(mat &);
			mat operator-(mat &);
			mat operator*(mat &);
};

void mat::create()
{
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			{
				cout<<"Enter element at "<<i<<","<<j<<": ";
				cin>>z[i][j];
				cout<<endl;
			}
	/*cout<<"The matrix is:"<<endl
	
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				cout<<z[i][j]<<" "
			cout<<endl;
		}*/
	}

mat mat::operator+(mat &b)
			{
				mat c;
				if(m!=b.m && n!=b.n)
					{
					cout<<"Addition cannot be performed"<<endl;
					
				}
				
				else
				{
					
					c.m=m; c.n=n; 
					
					for(int i=0;i<m;i++)
						for(int j=0;j<n;j++)
								c.z[i][j]=z[i][j]+b.z[i][j];
				}
					return c;
			}


mat mat::operator-(mat &b)
			{
				mat c;
				if(m!=b.m && n!=b.n)
					{
					cout<<"Subtraction cannot be performed"<<endl;
				}
				
				else
				{
					c.m=m; c.n=n; 
					
					for(int i=0;i<m;i++)
						for(int j=0;j<n;j++)
								c.z[i][j]=z[i][j]-b.z[i][j];
				}	
					return c;
				
			}
			
mat mat::operator*(mat &b)
			{
				mat c;
				if(n!=b.m)
					{
					cout<<"Multiplication cannot be performed"<<endl;
				}
				
				else
				{
				
					c.m=m; c.n=b.n; 
					
					for(int i=0;i<m;i++)
						for(int j=0;j<n;j++)
							{
								c.z[i][j]=0;
							for(int k=0;k<n;k++)
								{
									
									c.z[i][j]+=z[i][k]*b.z[k][j];
								}
							}
					}
					return c;
		}
		
void mat::display()
{
	for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				cout<<z[i][j]<<" ";
			cout<<endl;
		}
		cout<<endl;
	}
int main()
{
	mat a(2,2),b(2,2),c,d,e;
	
	cout<<"The two matrices are:"<<endl;
	a.display();
	b.display();
	
	c=a+b;
	
	cout<<"The sum of the matrices is:"<<endl;
	c.display();
	
	d=a-b;
	cout<<"The difference of the matrices is:"<<endl;
	d.display();
	 
	e=a*b;
	cout<<"The product of the matrices is:"<<endl;
	e.display();
	
	return 0;
}
	
	
	
	
	
