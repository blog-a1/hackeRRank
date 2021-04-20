#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;cin>>n;
    while(n--)
    {
        string s;cin>>s;int c=0;
        vector<int>a(26);
        for(int i=0;i<s.length();i++)
            a[s[i]-'a']++;
        for(int j=0;j<26;j++)
            if(a[j]!=0)     c++;
        cout<<c<<endl;
    }
    return 0;
}