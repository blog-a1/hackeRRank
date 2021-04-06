#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str="hackerrank";
    int n;cin>>n;
    while(n--)
    {
        string s;cin>>s;int c=0;
        for(int i=0;i<str.length();i++)
        {
            for(int j=0;j<s.length();j++)
                if(str[i]==s[j])
                {
                    c++;i+=1;
                }
        }
        if(c==str.length())     cout<<"YES"<<endl;
        else        cout<<"NO"<<endl;
    }
    return 0;
}