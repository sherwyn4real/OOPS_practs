#include<iostream>
#include<vector>
using namespace std;
	int main(){
	vector<int>v;
	while(1){
	cout<<"\n\n1.Create\n2.Display\n3.Size\n4.Add at end\n5.Delete last\n6.Delete range of elements\n7.Exit\n";
	int ch;
	cin>>ch;
	switch(ch){
	case 1:{
	int n,x;
	cout<<"\nEnter number of elements: ";
	cin>>n;
	cout<<"\nEnter elements to be inserted:\n";
	for(int i=0;i<n;i++){
	cin>>x;
	v.push_back(x);
	}
	break;
	}
	case 2:
	for(int i=0;i<v.size();i++){
	cout<<" "<<v[i];
	}
	break;
	case 3:
	cout<<"\nSize of vector: "<<v.size();
	break;
	case 4:{
	int e;
	cout<<"\nEnter element to be added: ";
	cin>>e;
	v.push_back(e);
	break;
	}
	case 5:
	cout<<"\nElement deleted";
	v.pop_back();
	break;
	case 6: {
	//deleting elements (m,n)<->(n-m)
	 int p1,p2;
	cout<<"\nEnter range of position to be deleted:\n";
	 cin>>p1>>p2;
	v.erase(v.begin()+p1-1,v.begin()+p2); //v.begin()=1
	break;
	}
	case 7:
	exit(1);
	default:
	cout<<"\nInvalid choice..... try again";
	}
	}
	}
