#include<iostream>
using namespace std;

class adopt
{
	protected: char breed[30];
				
	public: adopt(char *n)
			{
				strcpy(breed,n);
			}
			virtual void display()
			{
				
			}
};

class cat:public adopt
{
	float price;
	int age;
	
	public:cat(char *b,float p, int a):adopt(b)
			{
				price=p;
				age=a; 
			}
				
			void display()
			{	
				cout<<"Category:Cat"<<endl;
				cout<<"breed:"<<breed<<endl;
				cout<<"price:"<<price<<endl;
				cout<<"age:"<<age<<" year(s) old"<<endl;
			}
};

class dog:public adopt
{
	float price;
	int age;
	
	public:dog(char *b, float p, int a):adopt(b)
			{
				price=p;
				age=a;
			}
			void display()
			{
				cout<<"Category:Dog"<<endl;
				cout<<"breed:"<<breed<<endl;
				cout<<"price:"<<price<<endl;
				cout<<"age:"<<age<<" year(s) old"<<endl;
			}
};

int main()
{
	float p;
	int age;
	char *b=new char[30];
	
	cout<<"Enter breed of the dog to be given up for adoption"<<endl;
	cin.getline(b,30);
	cout<<"Enter age of the dog(in years)"<<endl;
	cin>>age;
	cout<<"Enter price to be adopted for (in Rs.)"<<endl;
	cin>>p;
	
	dog d(b,p,age);
	
	while((getchar()!='\n'));
	
	cout<<endl;
	
	cout<<"Enter breed of the cat to be given up for adoption"<<endl;
	cin.getline(b,30);
	cout<<"Enter age of the cat(in years)"<<endl;
	cin>>age;
	cout<<"Enter price to be adopted for (in Rs.)"<<endl;
	cin>>p;
	
	cat c(b,p,age);
	
	adopt *a[2];
	
	a[0]=&d;
	a[1]=&c;
	cout<<endl;
	a[0]->display(); cout<<endl<<endl;
	a[1]->display();

return 0;
}

