#include<iostream>
#include<fstream>
#include<ctype.h>
using namespace std;

class directory
{
	char name[30];
	long long int n;
	public: void update()
			{
				cin>>n;
			}
			
			void getdata()
			{
				cout<<"Enter name"<<endl;
				cin>>name;
				cout<<"Enter corresponding phone no"<<endl;
				cin>>n;
			}
			char * getinfo()
			{
				return name;
			}
};
fstream tele;
void add();
void update();
int main()
{
	int c;
	
	do
	{
		
	cout<<"Enter your choice"<<endl;
	cout<<"1.Add a telephone record"<<endl<<"2.Update an existing record"<<endl<<"0.exit"<<endl;
	cin>>c;
	switch(c)
	{
		case 1:add();break;
		
		case 2:update();break;
		
		default:if(c)
				cout<<"Wrong choice"<<endl;
				
	}
	}while(c!=0);

	return 0;
}

void add() 
{
	
	
	tele.open("directory",ios::app | ios::binary);
	
	directory z;
	
		z.getdata();
		tele.write((char*)&z,sizeof(z));

	while(getchar()!='\n');
	
	tele.close();
	cout<<"The record was added successfully"<<endl<<endl;
}
	
void update()
{
	char nm[30];
	
	directory z;
	
		tele.open("directory",ios::in | ios::binary);
		tele.seekg(0);
		
		cout<<"Enter the name of the user whose phone number is to be updated"<<endl;
		cin>>nm;
		int g,p=0;
		
		while(tele.read((char*)&z,sizeof(z)))
		{
			if(strcmp(nm,z.getinfo()) == 0)
				{
					p=1;
					g=tele.tellg();
					break;
				}
		}
		tele.close();
		
		if(p)
		{
			tele.open("directory", ios::ate | ios::binary);
			
			g = g-sizeof(z);
			
			tele.seekp(g);
			cout<<"Enter the new phone number"<<endl;
			z.update();
			
			tele.write((char*)&z,sizeof(z));
			
			cout<<"The record was updated successfully"<<endl;
			tele.close();
		}
		else
			cout<<"The record doesnt exist"<<endl;
			
	cout<<endl;
			
}
	

	
	
	
		
		
