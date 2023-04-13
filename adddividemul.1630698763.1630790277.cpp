#include<iostream>
using namespace std;
int main()
{
   int choice;
   do
   {
   	   
   double add();
   double mul();
   double div();
   double sub();
   double leap();
   double percent();
  cout<<"Press 1 for Addition : \n" ;
  cout<<"Press 2 for Multiplication: \n";
  cout<<"Press 3 for division: \n";
  cout<<"Press 4 for subtraction: \n";
  cout<<"Press 5 for Percentage: \n";
  cout<<"Press 6 to check leap year: \n";
  cout<<"\n!! WELCOME !!Please enter your choice.\n";
  cin>>choice;
  switch(choice)
  {
  	case 1:
		  cout<<add();
		  break; 
    case 2:
    	  cout<<mul();
    	  break;
    case 3:
    	cout<<div();
    	break;
    case 4:
    	cout<<sub();
    	break;
    case 5:
    	cout<<percent();
    	break;
    case 6:
    	cout<<leap();
    	break;
    default: 
        cout<<"Invalid choice: ";          
  }
   }while(choice!=0) ;
  return 0;
	
}
add()
{
	int n,arr[10];
	cout<<"How many number you want to add: \n";
	cin>>n;
	cout<<"Enter your number: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	cout<<"Sum = "<<sum<<"\n";	
}
mul()
{
	int n,arr1[10];
	cout<<"How many number you want to multiply: \n";
	cin>>n;
	cout<<"Enter your numbers :\n";
	for(int  i=0;i<n;i++)
	{
		cin>>arr1[i];
	}
   	int mul1=1;
	for(int i=0;i<n;i++)
	{
		mul1=mul1*arr1[i];
	}
	cout<<"Multiplication: "<<mul1<<"\n";
	
} 
div()
{
	int n,arr2[10];
	cout<<"Enter how many number you want to divide: \n";
	cin>>n;
	cout<<"Enter yuor numbers: \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr2[i];
	}
	int div1;
	for(int i=1;i<n;i++)
	{
		div1=arr2[i]%div1;
	}
	cout<<"div: \n"<<div1<<"\n";
	
}
sub()
{
	int n,arr3[10];
	cout<<"How many number you want to subtraction: \n";
	cin>>n;
	cout<<"Enter your numbers  : \n";
	for(int i=0;i<n;i++)
	{
		cin>>arr3[i];
	}
	int sub1=0; 
	for(int i=0;i<n;i++)
	{
		sub1=arr3[i]-sub1;
	}
	cout<<"\nSubtraction: \n"<<sub1<<"\n" ;
}
percent()
{
	int n,arr5[10];
	cout<<"How many number you want to find percentage: \n";
	cin>>n;
	cout<<"Enter your numbers: \n";
	for(int i=0;i<n;i++)
	{
		 cin>>arr5[i];
	}
	int per[]={1 };
    for (int i=0;i<n;i++)
	{
		int arr5[0];
		per[0]=arr5[i]%arr5[i+1];
	 }
	  cout<<"Percentage :"<<per[0]<<"\n"; 
	 
}
leap()
{
	int year;
	cout<<"Enter year to check it  leap year  or not!?\n ";
	cin>>year;
	if((year%4==0)&&(year)%100!=0)
	{
		cout<< " It is leap year\n";
	}
	else if(year%400==0)
	{
		cout<<"It is leap year\n";
	}
	else
	{
		cout<<"It is not Leap year\n";
	}
	
}
