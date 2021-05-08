#include<iostream>
#include<fstream>
#include<ctype.h>
#include<iomanip> 
using namespace std;

class student
{
	char name[30];
	 int roll;
	 char address[45];
	 char branch[20];
	 
	public: void update();
			void putdata(); 
			void getdata();
			char * getname()
			{
				return name;
			}
			int getroll()
			{
				return roll;
			}
};
void student::getdata()
{	
	cout<<"Enter name"<<endl;
	cin>>name;
	cout<<"Enter roll no"<<endl;
	cin>>roll;
	cout<<"Enter branch"<<endl;
	cin>>branch;
	while((getchar())!='\n');
	cout<<"Enter address"<<endl;
	cin.getline(address, 45);
	//while((gectchar())!='\n');
}

void student::putdata()
{
	cout<<name<<setw(10)<<roll<<setw(16)<<branch<<setw(17)<<address<<endl;
}
int main()
{
	student a[20];
	char c;
	int i=-1;;
	do
	{	
		i++;
		a[i].getdata();
		fstream f(a[i].getname(),ios::out | ios::binary);
		f.write((char*)&a[i],sizeof(a[i]));
		f.close();
		
		cout<<"Do you want to save another student's record?(y/n)"<<endl;
		cin>>c;
	}while(c!='n');
	
	cout<<"The records are as follows"<<endl;
	
	cout<<"Name"<<setw(12)<<"Roll"<<setw(15)<<"Branch"<<setw(15)<<"Address"<<endl;
	for(int j=0;j<=i;j++)
		a[j].putdata();
		
	
	int roll;
	cout<<"Enter roll no. of student whose record is to be updated"<<endl;
	cin>>roll;
	int j=0;
	
	while(j<=i)
	{
		if(roll == a[j].getroll())
				break;
			j++;
		}
	
	if(j>i)
	{
		cout<<"The record doesnt exit"<<endl;
		exit(1);
	}
	
	 fstream f(a[j].getname(), ios::in | ios::binary);
	f.read((char*)&a[j],sizeof(a[j]));
	f.close();
	
	remove(a[j].getname());
	
	cout<<"Enter the new details of the student"<<endl;
	a[j].getdata();
	
	f.open(a[j].getname(), ios::out | ios::binary);
	f.write((char*)&a[j],sizeof(a[j]));
	f.close();
	
	cout<<"The record was successfully updated as shown"<<endl;
	cout<<"Name"<<setw(12)<<"Roll"<<setw(14)<<"Branch"<<setw(15)<<"Address"<<endl;
	
	for(int j=0;j<=i;j++)
	{
		f.open(a[j].getname(), ios::in | ios::binary);
		f.read((char*)&a[j],sizeof(a[j]));
		a[j].putdata();
	}
	
	
	f.close();
	
	return 0;

}	
		
		
	
	
