#include<iostream>
#include<algorithm>
#include<string>
#include<map>
using namespace std;
int main()
{
    int q;cin>>q;
    map<string,int>m;
    while(q--)
    {
        m.clear();
        string str;cin>>str;
        int l=(int)str.size();
        for(int i=0;i<l;i++)
            for(int j=1;i+j-1<l;j++)
            {
                string s=str.substr(i,j);
                sort(s.begin(),s.end());
                m[s]++;
            }
        long long result=0;
        for(map<string,int>::iterator it=m.begin();it!=m.end();it++)
            result+=(long long)(it->second)*(it->second-1)/2;
        cout<<result<<endl;
    }
    return 0;
}