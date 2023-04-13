#include<iostream>
using namespace std;
class Student
{
	public:
	int id;
	string name;
};

int main()
{
	Student s1;
	s1.id=123;
	s1.name="Shashank"   ;
	cout<<"Id: "<<s1.id<<"  "<<"Name: "<<s1.name<<endl;
	return 0;
}

