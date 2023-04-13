#include<iostream>
using namespace std;
int main()
{
	int n;
	int arr[10] ;
	cout<<"Enter 10 elements in array "<<endl;
	for(int i=1;i<=10;i++)
	{
		cin>>arr[i];
	}
	for(int i=1;i<=10;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\nEnter a number to check "  <<"\n";
    cin>>n;
   for(int i=1;i<=10;i++)
    {
	
	     if( arr[i]==n)
	     cout<<"yes";

 }
 
 
	
	return 0;
}
