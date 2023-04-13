#include<iostream>
using namespace std;
int main()
{
	int t;
	cout<<"Declare the memory size:\n";
	cin>>t;
	int arr[t];
	int n;
	cout<<"Enter the array size:\n";
	cin>>n;
	cout<<"Enter the array elements:\n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Array elements are: \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n";
	cout<<"Reverse array elements are: \n";
	for(int j=n-1;j>=0;j--)
	{
			cout<<arr[j]<<" ";
	}
		return 0;
}
