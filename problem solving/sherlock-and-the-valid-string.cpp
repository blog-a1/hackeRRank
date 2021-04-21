#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
  string s;cin>>s;
  int a[26]={0},b=0,c=0,d=0,e=0,f=0;
  for(int i=0;s[i];i++)
  {
    a[s[i]-'a']++;
    if(b<a[s[i]-'a'])   b=a[s[i]-'a'];
  }
  for(int j=0;j<26;j++)
  {
    if(a[j]==0)   continue;
    if(a[j]==b)   d++;
    else if(a[j]==b-1)    e++;
    else    f++;
  }
  if(d<e)   c=f+d;
  else    c=e+f;
  if(c>1)   cout<<"NO"<<endl;
  else    cout<<"YES"<<endl;
  return 0;
}
