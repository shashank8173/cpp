#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int arr[t],n;
	cout<<"Enter the array size: \n";
	cin>>n;
	cout<<"Enter the array elements: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
    cout<<"Array elements are: \n";
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	cout<<"Reverse elements: \n";
	for(int i=0;i<n;i++)
	{
		arr[i]=arr[n-(i)];
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
