#include<iostream>
#include<algorithm>
#include<bitset>
using namespace std;
int main() 
{
  int a;cin>>a;
  bitset<26>m,n;
  m.set();
  while(a--) 
  {
    string str;cin>>str;
    for(char c:str)     n.set(c-'a');
    m&=n;n.reset();
  }
  cout<<m.count()<<endl;
  return 0;
}
