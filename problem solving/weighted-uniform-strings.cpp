#include<iostream>
#include<vector>
using namespace std;
int main()
{
    string s;cin>>s;
    int t,b=1;cin>>t;
    vector<bool>v(10000000);
    char c='1';
    for(int i=0;i<s.size();i++)
    {
        int d=s[i]-'a'+1;
        if(s[i]==c)
        {
            b++;d*=b;
        }
        else        b=1;
        c=s[i];
        v[d]=true;
    }
    for(int j=0;j<t;j++)
    {
        int n;cin>>n;
        if(v[n])        cout<<"Yes"<<endl;
        else        cout<<"No"<<endl;
    }
    return 0;
}