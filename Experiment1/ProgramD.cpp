#include<iostream>
#include<string.h>

using std::cout;		
using std::cin;			
using std::endl;
					/*using namespace std already has a type string
					  Hence only certain std elements used to avoid
					  ambiguity errors
					  */
class string
{
	char *p;
	int len;
	public: string()
			{
				len=0;
				p=NULL;
			}
			string(const char *s)
			{
				len=strlen(s);
				p=new char[len+1];
				strcpy(p,s);
			}
			
			string operator+(string &x);
			
			friend std::istream & operator>>(std::istream &,string &);
			
			friend std::ostream & operator<<(std::ostream &a, string &b)
			{
				a<<b.p;
				cout<<endl;
				return a;
			}
				
			int operator<(string &y)
			{
				if(len<y.len)
					return 1;
					
				else
					return 0;
			}
			
			int operator>(string &y)
			{
				if(len>y.len)
					return 1;
					
				else
					return 0;
			}
				
			friend void show(string &z)
			{
				cout<<z.p<<endl;
			}
				
};

string string:: operator+(string &x)
			{
				string temp;
				temp.len=len+x.len;
				
				temp.p=new char[temp.len+1];
				strcpy(temp.p,p);
				strcat(temp.p,x.p);
				
				return(temp);
			}

std::istream & operator>>(std::istream &a, string &b)
			{
				char* t=new char[50];				//Using temp variable to first accept string
				a>>t;
				b.len=strlen(t);	
				b.p=new char[b.len+1];		//allocating memory for the string in the actaul pointer
				strcpy(b.p,t);			//copying from temp variable to the required actual object's member
				
				delete t;
				return a;
			}

int main()
{
	string a("TAJ "),b("MAHAL"),c,x,y;
	
	c=a+b;
	
	cout<<"string 1:";
	show(a);
	
	cout<<"string 2:";
	show(b);
	
	cout<<"string 1+string 2:";
	show(c);
	
	cout<<endl;
	cout<<"Enter first string"<<endl;
	cin>>x;
	
	cout<<"Enter second string"<<endl;
	cin>>y;
	
	if(x<y)
		{
		cout<<"The smaller string is:";
		cout<<x;
		}
	else if(x>y)
		{
			cout<<"The smaller string is:";
			cout<<y;
		}
	else
		cout<<"The strings are of equal length"<<endl;
		
	return 0;
}
