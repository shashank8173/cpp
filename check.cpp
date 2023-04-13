#include<iostream>
using namespace std;
int main()
{
	int n,j=0;
	cout<<"Enter numbers of line \n";;
	cin>>n;
	for(int i=0;i<=n-1;i++)
	{
		cout<<" ";
	
		while(j!=i-1)
		{
			cout<<"*";
			j++;
		}
		 j=0;
		cout<<"\n";
	}
	return 0;
}
