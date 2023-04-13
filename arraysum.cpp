#include<iostream>
using namespace std;
int main()
{
	int a[]={2,3,5,6,7} ;
	int sum=0;
	int product=a[0];
	for(int i=0;i<5;i++)
	{
		sum=sum+a[i];
		product=product*a[i];
	}
	cout<<"sum: "<<sum<<"  \nproduct: "<<product;
}
