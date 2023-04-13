#include<iostream>
using namespace std;
int main()
{
	int n,arr[50];
	do
	{
			cout<<"Enter the array size: ";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	}while(true);
	return 0;
    
}
