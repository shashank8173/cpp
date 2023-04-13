#include <iostream>
#include <iomanip>
#include <fstream>
#include <cstdlib>
using namespace std; 
int main()
{
 ofstream out;
 ifstream in;
 char fname1[10],fname2[10];
 char ch;
 cout << “ enter a Raw name to be copied  \n”;
 cin >> fname1;
 cout << “ new name ? \n”;
 cin >> fname2;
 in Raw.open(fname1);
 if (in.fail()) {
 cerr << “ No such a Raw exists \n”;
 exit(1);
 }
 out.open(fname2);
 if (out.fail()) {
 cerr << “ unable to create a Raw \n”;
 exit(1);
 }
 while ( !in.eof()) {
 ch = (char)in.get();
 if (ch == ' ' || ch == '\t' || ch == '\n')
 ;
 else
 out.put(ch);
 }
 in.close();
 out.close();
 return 0;
}
