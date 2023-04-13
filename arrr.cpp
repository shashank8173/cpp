#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int *ptr;
	cout<<"Enter ten digits"<<endl;
	for(int i=0;i<10;i++)
	{
	  cin>>arr[i];	
	}
	ptr=arr;
	cout<<"Value of *ptr: "<<*ptr<<endl;
	cout<<"Value of *arr: "<<*arr<<endl;
	return 0;
	
}
