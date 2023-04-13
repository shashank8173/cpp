#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character to check : \n" ;
	cin>>ch;
	if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		cout<<"Is a Alphabat: "<<ch<<endl;
	}
	else
	{
		cout<<"Is not Alphabat\n";
	}
	return 0;
}
