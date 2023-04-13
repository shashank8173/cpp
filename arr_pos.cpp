#include<iostream>
using namespace std;
int func(int n,int arr[],int pos,int value)
{
	for(int i=n-1;i>=pos;i--)
	{
		arr[i]=arr[i-1];
		
	}
	arr[pos-1]=value;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	int arr[100],n,pos,value;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cin>>pos>>value;
	func(n,arr,pos,value);
	
}
