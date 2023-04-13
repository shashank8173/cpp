#include<iostream>
using namespace std;
int bubbleSort(int arr1[],int n)
{
	int i,j;
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr1[j]>arr1[j+1])
			{
				swap(arr1[j],arr1[j+1]);
			}
		}
	}
}
void printSort(int arr1[],int n)
{
	for(int i=0;i<n;i++)
    {
    	cout<<arr1[i]<<" ";
	}
}
int main()
{
	int arr[5]={3,4,1,2,-1};
	cout<<"Before sorting.\n";
	printSort(arr,5);
	bubbleSort(arr,5);
	cout<<"\nAfter sorting.\n";
	printSort(arr,5);
	return 0;
}
