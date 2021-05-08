#include<iostream>
#include<vector>

using namespace std;

void display( vector<int> &v)
{
	for( int i=0;i<v.size();i++)
		cout<<v[i]<<"\t";
		
	cout<<endl;
}

int main()
{
	vector<int>v;
	
	cout<<"current size="<<v.size()<<endl;
	
	cout<<"Enter 5 elements"<<endl;
	int x;
	for(int i=1;i<=5;i++)
		{
			cin>>x;
			v.push_back(x);
		}
	display(v);
	
	vector<int> :: iterator i=v.begin();

	v.insert(i,10);
	display(v);
	v.erase(i,i+2);
	display(v);
	return 0;
}
	
