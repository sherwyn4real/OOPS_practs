#include<iostream>
using namespace std;

class base
{
	public: virtual void display()=0;
	
};
void base::display()
{
	cout<<"Definition of virtual function display() here"<<endl;
}

class derived:public base
{
	public: void display()
			{
				cout<<"Defintion of derived class function display()"<<endl;
			}
};

int main()
{
	base *ptr;
	derived a;
	
	ptr=&a;
	ptr->display();
	
	return 0;
}
		
