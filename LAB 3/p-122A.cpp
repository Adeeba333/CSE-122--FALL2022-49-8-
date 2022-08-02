
// codeforces problem no-122A
// problem name- Petya and strings
#include<iostream>
#include<string.h>
using namespace std;
int main()
{
string a,b;
cin>>a>>b;
int i;
for(i=0;i<a.length();i++)
{
a[i]=tolower(a[i]);
b[i]=tolower(b[i]);
}
if(a==b)
cout<<0;
else if(a>b)
cout<<1;
else
cout<<-1;
    return 0;
}
