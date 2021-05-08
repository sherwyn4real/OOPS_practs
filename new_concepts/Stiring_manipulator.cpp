#include<iostream>

using namespace std;

class strin
{
	char *p;
	int len;
	public: strin()
			{
				len=0;
				p=NULL;
			}
			strin(const char *s)
			{
				len=strlen(s);
				p=new char[len+1];
				strcpy(p,s);
			}
			
			
			
			strin operator+(strin &x)
			{
				strin temp;
				temp.len=len+x.len;
				
				temp.p=new char[temp.len+1];
				strcpy(temp.p,p);
				strcat(temp.p,x.p);
				
				return(temp);
			}
			friend void show(strin &z)
			{
				cout<<"string:"<<z.p<<endl;
			}
				
};



int main()
{
	strin a("THE "),b("BIG "),c("BANG "),d;
	
	show(a);
	show(b);
	show(c);
	
	d=a+b+c;

	show(d);
	
	return 0;
}
