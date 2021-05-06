#include<iostream>
#include<vector>
#include<unordered_map>
using namespace std;
int main()
{
    int n,c;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>c;v.push_back(c);
    }
    vector<int>v2;
    unordered_map<int,int>m;
    for(int i=0;i<v.size();i++)
        m[v[i]]++;
    for(int i=0;i<=99;i++)
    {
        if(m[i]>0)
            for(int j=1;j<=m[i];j++)
                v2.push_back(i);
    }
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    return 0;
}