#include<iostream>
using namespace std;
int firstOccurance(int arr[],int size,int key)
{
	int ans=-1;
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			end=mid-1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}
int lastOccurance(int arr[],int size,int key)
{
	int ans=-1;
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;
		}
		else if(key>arr[mid])
		{
			start=mid+1;
		}
		else
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return ans;
}

int main()
{
	int arr1[7]={2,3,3,3,3,3,4};
	cout<<"first 3 at index: "<<firstOccurance(arr1,7,3)<<endl;
	cout<<"last 3 at index: "<<lastOccurance(arr1,7,3)<<endl;
	return 0; 
}
