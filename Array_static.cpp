#include<iostream>
#include<array>
using  namespace std;
int main()
{
	int arr[3]={1,2,3};
	array<int ,4> a={1,2,3,4};
	int size=a.size();
	for(int i=0;i<size;i++)
	{
		cout<<a[i]<<endl;
	}
	cout<<"Is array is empty"<<a.empty()<<endl;//if it return 0 its means no if 1 it means yes
	cout<<"find index element: "<<a.at(2)<<endl;
	cout<<"find the front and last element .\n"<<a.front()<<" \n"<<a.back()<<endl;
}
