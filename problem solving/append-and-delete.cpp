#include<iostream>
using namespace std;
int main()
{
    string s,t;int k,i;cin>>s>>t>>k;
    for(i=0;s[i]==t[i];i++);
    (s.length()+t.length())<=k+i*2&&(s.length()+t.length())%2==k%2||(s.length()+t.length())<k?cout<<"Yes":cout<<"No";
    return 0;
}