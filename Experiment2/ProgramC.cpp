#include<iostream>
#include<iomanip>
using namespace std;

class hospital
{
	char illness[30];
	
	public: hospital(const char *i)
			{
				strcpy(illness,i);
			}
			
	protected: void display1()
			{
				cout<<setw(46)<<"ILLNESS:"<<illness<<endl;
			}
};

class patient
{
	int age;
	char name[30];
	
	public: patient(int a, const char*n)
			{
				strcpy(name,n);
				age=a;
			}
			
	protected:void display2()
			{
				cout<<setw(50)<<"NAME:"<<name<<endl<<setw(52)<<"AGE:"<<age<<endl;
			}
};


class person:public hospital,public patient
{
	char dob[20];
	
	public: person(const char *i,int a,const char*n,const char *d):hospital(i),patient(a,n)
			{
				strcpy(dob,d);
				display3();
			}
			
	protected:void display3()
			{
				display2();
				display1();
				cout<<setw(47)<<"DOB:"<<dob<<endl;
			}
};

int main()
{
	person a("Motor-Neuron Disease",76,"Hawking","8-January-1942");
	
	return 0;
}
