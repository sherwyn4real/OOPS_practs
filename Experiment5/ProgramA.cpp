#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream a,b,c;
	
	a.open("abc.txt", ios::out);
	b.open("xyz.txt", ios::out);
	
	int num;
	
	cout<<"Enter 5 elements in the first file"<<endl;
	int i=1;
	
	while(i<=5)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>num;
		a.write((char*)&num,sizeof(num));
		i++;
	}
	
	cout<<endl<<endl;
	cout<<"Enter 3 elements in the second file"<<endl;
	 i=1;
	
	while(i<=3)
	{
		cout<<"Enter element "<<i<<": ";
		cin>>num;
		b.write((char*)&num,sizeof(num));
		i++;
	}
	a.close();
	b.close();
	
	int num1, num2;
	a.open("abc.txt", ios::in);
	b.open("xyz.txt", ios::in);
	c.open("sort.txt", ios::out);
	
	a.seekg(0,ios::beg);
	b.seekg(0,ios::beg);
	
	while(a.read((char*)&num1,sizeof(num1))) 
		c.write((char*)&num1,sizeof(num1));

	while( b.read((char*)&num2,sizeof(num2)) )
		c.write((char*)&num2,sizeof(num2));
	
	c.close();
	int arr[8];
	i=0;
	
	c.open("sort.txt",ios::in);
	
	while(c)
	{	
		c.read((char*)&num,sizeof(num));
		arr[i]=num;
		i++;
	}
	c.close();
	cout<<"Before sorting:"<<endl;
	for(i=0;i<8;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
	
	cout<<endl<<"After sorting:"<<endl;
	
	for(i=1;i<8;i++)
		for(int j=0;j<8-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				num=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=num;
			}
		}
	
	for(i=0;i<8;i++)
		cout<<arr[i]<<" ";
		
	cout<<endl;
	
	c.open("sort.txt",ios::out);
	i=0;
	while(i<8)
	{
		c.write((char*)&arr[i],sizeof(arr[i]));
		i++;
	}
	
	a.close();
	b.close();
	c.close();
	
}
		
	 
