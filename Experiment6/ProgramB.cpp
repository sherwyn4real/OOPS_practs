#include<iostream>
using namespace std;

template<class T>
class vector
{
	T *v;
	int size;
	public:
			vector(T *a, int s)
			{
				v = new T[size=s];
				for(int i=0;i<size;i++)
					v[i]=a[i];
				
				}
			
			void display()
			{
				
				for(int i=0;i<size;i++)
					cout<<v[i]<<"\t";
					
				cout<<endl;
			}
			
			void modify(T x, int s)
			{	s=s-1;
				for(int i=0;i<size;i++)
					if(i==s)
						v[i]=x;
			}
};

int main()
{
	int a[3]={5,8,10};
	
	
	vector<int>t(a,3);
	cout<<"The vector is as follows"<<endl;
	t.display();
	
	int i,x;
	cout<<"Enter the position of the element to be modified and enter new element"<<endl;
	cin>>i>>x;
	t.modify(x,i);
	cout<<"\n\nThe value was modified and now the resulting vector is:"<<endl;
	t.display();
	
	return 0;
}
	
	
	
	
