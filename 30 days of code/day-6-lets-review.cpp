#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        string str,e,o;cin>>str;
        for(int j=0;j<str.size();j++)
        {
            if(j%2==0)      e+=str[j];
            else        o+=str[j];
        }
        cout<<e<<" "<<o<<endl;
    }
    return 0;
}