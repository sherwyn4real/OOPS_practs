#include<iostream>
#include<string.h>
using namespace std;

int random=1234;
class employee
{
	char name[50];
	char address[25];
	float salary;
	int emp_id;
	int perform_index;
	
	public: void getdata();
			void display();
			void search(int x, int y=0, int z=0);
			float get_salary()
			{
				return salary;
			}
			char* get_address()
			{
				return address;
			} 
			
			int get_pi()
			{
				return perform_index;
			}
			
			void bonus()
			{
				salary=salary+0.1*salary;
			}
			
			int getemp_id()
			{
				return emp_id;
			}
			
};
 employee* a=new employee[5];
 
void employee::getdata() 
{
	cout<<"Enter name, address, salary and performance index of employee in that order"<<endl;
	cin>>name>>address>>salary>>perform_index;

		
	emp_id=salary/perform_index + random;
	}


void employee::display()
{
	cout<<"emp-id:"<<emp_id<<endl;
	cout<<"name:"<<name<<endl;
	cout<<"address:"<<address<<endl;
	cout<<"salary:"<<salary<<endl;
	cout<<"performance index:"<<perform_index<<endl;
	
	cout<<endl;
}


void search(int x,int y,int z)
{	
	int i=0;
	
	if(x==1)
	{
		for(i=0;i<5;i++)
			if(a[i].get_salary()>=10000 && a[i].get_salary()<=25000)
				a[i].display();
	}
	
	else if(y==1)
	{
		for(i=0;i<5;i++)
			if(!strcmp(a[i].get_address(),"panjim"))
				a[i].display();
	}
	
	else
	{
		for(i=0;i<5;i++)
			if(a[i].get_pi()>=3 && a[i].get_pi()<=5)
				a[i].bonus();
			
		cout<<"10% Bonus was awarded to the respective employees"<<endl;
	}
}

void empsearch(int e)
{
	int i;
	for( i=0;i<5;i++)
		{
		if(e==a[i].getemp_id())
			{
			a[i].display();
			break;
		}
		}
		
		if(i>4)
		cout<<"The Employee ID you entered was invalid. Please try again"<<endl;
}
	
int main()
{	
	void empsearch(int);
	int c,e;
	
	cout<<"Please enter data of five employees"<<endl;
	for(int i=0;i<5;i++)
		a[i].getdata();
		
	cout<<"The employee IDs are as follows"<<endl;
	
	for(int i=0;i<5;i++)
		cout<<a[i].getemp_id()<<endl;
		
	
	do
	{
			
	cout<<"Please select an option"<<endl;
	cout<<"1.Display list of employee details whose salary is between 10,000 and 25,000\n2.Display list of employee details who live in Panjim\n3.Provide 10% bonus to employees whose performance index ranges from 3 to 5\n4.Display the entered data\n5.Search for an entry\n0.exit"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:search(1,0,0);
				break;
		
		case 2:search(0,1,0);
				break;
				
		case 3:search(0,0,1);
				break;
			
		case 4:for(int i=0;i<5;i++)
					a[i].display();
				break;
					
		case 5:cout<<"Enter employee id of the entry you'd want to search"<<endl;
				cin>>e;
				empsearch(e);
				break;
				
		default:if(c)
				cout<<"Invalid option. Enter again"<<endl;
	
	}
}while(c);
	
	
	
	return 0;
}
