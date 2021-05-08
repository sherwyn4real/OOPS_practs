#include<iostream>
#include<iomanip>
using namespace std;
 
int main()
{
	 char a[200];
	 int l=0,c=0,w=0;
	long long unsigned int i;
	 
	 cout<<"Enter your text. Press '#' followed by ENTER key to stop"<<endl;
	 cin.getline(a,200,'#');
	 
	 for( i=0;i<=strlen(a);i++)
	 {
		 if(a[i]=='\n')
			l++;
			
		if(a[i]==' ' || a[i]=='\0' || a[i]=='\n')
				w++;
				
			
		if(a[i]!=' ' && a[i]!='\n' && a[i]!='\t' && a[i]!='\0')
				c++;
		}
		cout<<endl<<endl;
	
	cout.setf(ios::left,ios::adjustfield);
		
	cout<<setw(20)<<"Number of Lines"<<setw(20)<<"Number of Words"<<"Number of Characters"<<endl;
	
	
	
	cout<<setiosflags(ios::right)<<setw(15)<<l<<setw(20)<<w<<setw(25)<<c<<endl<<endl;
	
	return 0;
}

	 
 
	 
	 
	 
