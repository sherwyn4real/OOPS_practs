//creating files with constructor functions
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ofstream fout("items");
	cout<<"\nEnter item name:";
	char name1[10];
	cin>>name1;
	
	fout<<name1<<"\n";   // writing name1 to file items linked with fout 
	
	cout<<"\nEnter item cost:";
	float cost1;
	cin>>cost1;
	
	fout<<cost1<<"\n";
	
	fout.close();
	
	ifstream fin("items");
	
	char name2[10];
	float cost2;
	
	fin>>name2;
	fin>>cost2;
	
	cout<<"\n";
	
	cout<<"\n item name : "<<name2;
	cout<<"\n item cost : "<<cost2;
	 
	return 0;
	
}
