#include<iostream>
#include<string>
using namespace std;
int main()
{
  int n,c=0;cin>>n;
  string str,s="010";cin>>str;
  for(int i=0;i<n;)
  {
    if(str.substr(i,s.length())==s)   
    {
        c++;i+=3;
    }
    else        i++;
  }
  cout<<c<<endl;
  return 0;
}