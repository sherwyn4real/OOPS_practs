

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector<int> v(10);
    vector<int>::iterator it=v.begin();
    (*it)=100;
    it=v.end()-1;
    (*it)=200;
    fill(v.begin()+1, v.end()-1, 10);
    for(it=v.begin();it!=v.end();it++)
      cout<<" "<<(*it);
      
}
