#include<iostream>
using namespace std;
int main()
{
	int A[10][10],B[10][10],sum[10][10],r,c,i,k;
	int n;
	//int A[10][10],B[10][10];
	cout<<"Enter the array size  "   ;
	cin>>n;                                    									
	cout<<"Enter the first matrix elements: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			cin>>A[i][j] ;
		} 
	}  
	cout<<"Enter the second matrix elements: \n"; 
	for(int i;i<n;i++)  
	{    
		for(int j=0;j<n;j++)               
		{
			cin>>B[i][j];       
		} 
	}
	cout<<"Fist matrix:\n" ;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<A[i][j]<<" "; 
			
		}
		cout<<"\n";
	}
	cout<<"Array second: \n";
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<B[i][j]<<" ";
		}                                     												 
	}  
	cout<<"Adition of A[i][j]+B[i][j]:\n";
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		  sum[i][j]=A[i][j]+B[i][j];
		  cout<<sum[i][j]<<" ";
		}
		cout<<"\n " ;
   }
	
	return 0;
}
