#include<iostream>
using namespace std;

class school
{
	int n;
	
	public:school(int x)
		{
			n=x;
		}
		
	protected:void shown()
		{
			 cout<<n;
		}
};

class student:public school
{
	char name[30];
	int age;
	
	public:student(int n,char *na,int a):school(n)
			{
				strcpy(name,na);
				age=a;
				show();
			}
			
	protected:void show()
			{
				cout<<"Your unique school id is:"<<endl;
				int i=0;
				while(i<=2)
					cout<<name[i++];
				cout<<age;
				shown();
				cout<<endl<<endl;
			}
};

class teacher:public school
{
	char name[30];
	int age;
	
	public:teacher(int n,char *na,int a):school(n)
			{
				strcpy(name,na);
				age=a;
				show();
			}
			
	protected:void show()
			{
				cout<<"Your unique school id is:"<<endl;
				int i=0;
				while(i<=2)
					cout<<name[i++];
				cout<<age;
				shown();
				cout<<endl<<endl;
			}
};

int main()
{
	int age,code;
	char name[30];
	
	cout<<"Enter Faculty name:"<<endl;
	cin>>name;
	
	cout<<"Enter age:"<<endl;
	cin>>age;
	
	cout<<"Enter subject code (ranging from 2050 to 2059):"<<endl;
	cin>>code;
	
	teacher(code,name,age);
	
	
	cout<<"Enter student name:"<<endl;
	cin>>name;
	
	cout<<"Enter age:"<<endl;
	cin>>age;
	
	cout<<"Enter stream code (ranging from 2060 to 2069):"<<endl;
	cin>>code;
	
	student(code,name,age);
	return 0;
}
	
	
