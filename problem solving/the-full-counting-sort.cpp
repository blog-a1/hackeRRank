#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;
    string str[n];
    for(int i=0;i<n/2;i++)
    {
        int a;string s1;
        cin>>a>>s1;
        str[a]+="- ";
    }
    for(int j=n/2;j<n;j++)
    {
        int b;string s2;
        cin>>b>>s2;
        str[b]+=s2+" ";
    }
    for(int k=0;k<n;k++)
        cout<<str[k];
    return 0;
}