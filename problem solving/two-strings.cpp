#include<iostream>
using namespace std;
int main()
{
  int p;cin>>p;
  while(p--)
  {
    string s,str;cin>>s>>str;int c=0;
    for(int i=0;i<s.length();i++)
    {
      int n=str.find(s[i]);
      if(n!=-1)   c++;
    }
    (c==0)?cout<<"NO"<<endl:cout<<"YES"<<endl;
  }
  return 0;
}