#include<iostream>
using namespace std;
int main()
{
    int n,j;
    int arr[50];
    	int temp[50] ;
	cout<<"Enter the array size: \n";
	cin>>n;
	cout<<"Enter the array elements: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<" Array elemets : \n"<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<n;i++)
	{
	
		temp[i]=arr[i] ;
		arr[i]=j[i];
		j[i]=temp[i];
	}
	for(int i=0;i<n;i++)
	{
		cout<<temp[i]<<" ";
	}
	
	return 0;
		
}

