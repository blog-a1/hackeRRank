#include<iostream>
using namespace std;
int main()
{
    string s="abcdefghiklmnopqrstuvwxyz";
    string str;cin>>str;
    int b,c=0,l=str.length();
    for(int i=0;i<26;i++)
    {
        b=0;
        for(int j=0;j<l;j++)
        {
            if(s[i]==str[j])        b++;
        }
        if(b%2!=0)      c++;
    }
    if(c<=1)        cout<<"YES";
    else if(c==2&&l%2==0)       cout<<"YES";
    else        cout<<"NO";
    return 0;
}