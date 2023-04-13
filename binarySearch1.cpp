#include<iostream>
using namespace std;
int binnarySearch(int arr[],int size,int key)
{
	int start=0;
	int end=size-1;
	int mid=start+(end-start)/2;
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			return mid;
		}
		if (arr[mid]<key)
		{
			start=mid+1;
		}
		if(arr[mid]>key)
		{
			end=mid-1;
		}
		mid=start+(end-start)/2;
	}
	return -1;
}
int main()
{
	int even[4]={2,3,4,5};
	int odd[4]={6,7,8,9};
	int index=binnarySearch(even,4,5);
	cout<<"Index of element: "<<index;
	return 0;
}
