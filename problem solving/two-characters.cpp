#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int main() 
{
    int n,m=0;cin>>n;char chr;bool flag;
    string s;cin>>s;
    vector<int>v(26,0);
    for(char &c:s)      v[c-'a']++;
    for (int i=0;i<v.size();i++) 
    {
        if(v[i]==0)     continue;

        for(int j=i+1;j<v.size();j++) 
        {
            if(v[j]==0)     continue;
            chr=-1;
            flag=true;

            for(char &c:s) 
            {
                if(c==char(i+'a')||c==char(j+'a')) 
                {
                    if(chr==c) 
                    {
                        flag=false;break;
                    }
                    chr=c;
                }
            }
            if(flag&&abs(v[i]-v[j])<=1)     m=max(m,v[i]+v[j]);
        }
    }
    cout<<m<<endl;
    return 0;
}