#include<iostream>
#include<vector>
#include<algorithm>
#define INT_MAX 1000000000
using namespace std;
int main()
{
    int len;
    string s;cin>>len>>s;
    int n=s.size(),a=n/4,b=0,c=0,d=0,gene=INT_MAX;
    vector<int>m(128,0);
    for(auto i:s)       m[i]++;
    for(int &i:m)
    {
        i=max(0,i-a);b+=i;
    } 
    while(d<n)
    {
        if(m[s[d++]]-->0)       b--;
        while(b==0)
        {
            gene=min(gene,d-c);
            if(++m[s[c++]]>0)       b++;
        }
    }
    cout<<gene<<endl;
    return 0;
}