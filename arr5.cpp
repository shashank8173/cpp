#include<iostream>  
using namespace std;
int main()
{
   int arr[50],n,  sum=0;;
   cout<<"Enter the array size:\n ";
   cin >>n;
   cout<<"Enter the Array elements: \n";
   for(int i=0;i<n;i++)	
   {
   	cin >>arr[i];
   }
    cout<<"Array elements are:\n ";
   for(int i=0;i<n;i++ )
   {
   	cout<<arr[i]<<" ";
   }
   cout<<"\nReverse of array elements: \n";

   	for(int i=(n-1);i>=0;i--)
   	{
   	   cout<<arr[i]<<" ";	
    }
	
   for(int i=0;i<n;i++)
   {
   	sum=sum+arr[i];
   }
    cout<<"\nSum of array elements:\n "<<sum;
   
   return 0;
}    
    
