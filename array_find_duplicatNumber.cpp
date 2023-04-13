#include<bits/stdc++.h>
using namespace std;
int findDublicat(int arr1[],int size)
{
	int ans=0;
	for(int i=0;i<size;i++)
	{
		ans=ans^arr1[i];
	}
	for(int i=1;i<size;i++)
	{
		ans=ans^i;
	}
	return ans;
}
int main()
{
	int arr[4]={7,55,5,7};                             
	int t=findDublicat(arr,4);
	cout<<t;
	return 0;
}
