#include<iostream>
using namespace std;
char toLowercase(char ch)
{
    if(ch>='a'&&ch<='z')
    {
        return ch;
    }
    else
    {
        char temp=ch-'A'+'a';
        return temp;
    }
}
bool checkPolindrone(char ch[],int n)//abdba
{
	int s=0;
	int e=n-1;
	while(s<e)
	{
		if(toLowercase(ch[s])!=toLowercase(ch[e]))
		{
			return 0;
		}
		else
		{
			s++;
			e--;
		}
		return 1;
	}
}
int findLength(char ch[])
{
  int count=0;
  for(int i=0;ch[i]!='\0';i++)
  {
     count++;
  }
  return count;
}
void toreverse(char ch[],int n)
{
  int s=0;
  int e=n-1;
  while(s<e)
  {
   swap(ch[s++],ch[e--]);
  }
}
int main()
{ 
  char name[20];
  cin>>name;
  int len=findLength(name);
  cout<<"Length of string: "<<len<<endl;
  toreverse(name,len);
  cout<<"After reverse: "<<name<<"\n";
  cout<<"It is polindrone or not: "<<checkPolindrone(name,len)<<endl;
  return 0;
}

