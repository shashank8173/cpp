#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	cout<<"Enter n numbers "<<endl;
	for(int i=1;i<=10;i++)
	{
		cin>>arr[i];
	}
		cout<<"All elements in array: [";
	for(int i=1;i<=10;i++)
	{
	cout<<arr[i]<<",  ";
	}
	cout<<"]";
	 return 0;
}
