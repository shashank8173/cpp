#include<iostream>
using namespace std;
int findUnique(int *array,int size)
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans=ans^array[i];
	}
	return ans;
}
int main()
{
	int arr[5]={3,3,5,5,2};
	int t=findUnique(arr,5);
	cout<<t;
	return 0;
}
