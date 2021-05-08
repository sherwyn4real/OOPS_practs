#include<iostream>
using namespace std;

class employee
{
	int id;
	
	protected:void getid(int x)
			{
				id=x;
			}
	public:void showid()
			{
				cout<<"Employee id:"<<id<<endl;
			}
};

class time:virtual public employee 
{
	int hours;
	protected: void geth(int h)
			{
				hours=h;
			}
	public: void showh()
			{
				cout<<"Hours worked last week:"<<hours<<endl;
			}
			int sendh()
			{
				return hours;
			}
};

class project:virtual public employee
{
	int proj;
	protected: void getpro(int p)
			{
				proj=p;
			}
	public: void showpro()
			{
				cout<<"Total projects worked on in the week:"<<proj<<endl;
			}
			int sendp()
			{
				return proj;
			}
};

class salary:public time, public project
{
	int s;
	public: void getsalary(int id,int p,int h)
			{	
				getid(id);
				getpro(p);
				geth(h);
				
				s=sendh()*500+700*sendp();
				showid();
				showh();
				showpro();
				shows();
			}
			void shows()
			{
				cout<<"Total salary earned in the respective week:"<<s<<endl;
			}
};

int main()
{
	salary a;
	
	a.getsalary(3305,2,42);
	
	return 0;
}
	
