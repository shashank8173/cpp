#include<iostream>
using namespace std;
int main()
{
	int ptr[5] ;
	int *ptr1[5] ;
	cout<<"Enter 5 numbers"<< endl;
	for(int i=0;i<5;i++)
	{
		cin>>ptr[i];
	}
	for(int i=0;i<5;i++)
	{
		ptr1[i]=&ptr[i];
	}
	cout<<"The value are : "<<endl;
	for(int i=0;i<5;i++)
	{
	    cout<<*ptr1[i]<<endl;	
}
}
