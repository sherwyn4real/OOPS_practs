#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	float z=0;
	
	cout<<setw(5)<<"n"<<setw(15)<<"Inverse_of_n"<<setw(15)<<"Sum_of_terms"<<endl<<endl;
	for( int i=1;i<=10;i++)
		{
			cout<<setw(5)<<i<<setw(14)<<setiosflags(ios::scientific)<<setprecision(5)<<1.0/(float)i<<setw(16)<<resetiosflags(ios::scientific)<<setiosflags(ios::showpoint)<<z+1/(float)i<<endl;
				z=z+1/(float)i;
			}
	cout<<endl;
	return 0;
}
