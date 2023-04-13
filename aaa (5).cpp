#include<iostream>
using namespace std;
int main()
{
	char m[]="shashanksingh";
	char *n="chauhan";
	cout<<m<<endl;
	cout<<n<<endl;
	int a[]={1,2,3,4};
	char b[]="Shashank";
	cout<<a<<endl;
	cout<<b<<endl;
	char *c=&b[0];
	cout<<c<<endl;
	char d='o';
	char *t=&d;
	cout<<c<<endl;
	cout<<t<<endl;
	return 0;
}

