#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool compare(pair<int,int>o,pair<int,int>p)
{
    if(o.first>=p.first)        return true;
    else        return false;
}
int fun(int a[],int n,int m)
{
    vector<pair<int,int>>v(n);int c=0;
    for(int i=0;i<n;i++)
    {
        v[i].first=a[i];
        v[i].second=i;
    }
    if(m==0)        sort(v.begin(),v.end());
    if(m==1)        sort(v.begin(),v.end(),compare);
    for(int i=0;i<n;i++)
    {
        if(v[i].second==i)      continue;
        else
        {
            swap(v[i].first,v[v[i].second].first);
            swap(v[i].second,v[v[i].second].second);
        }
        if(i!=v[i].second)      --i;
        c++;
    }
    return c;
}
int main()
{
    int n,m=0,x,y;cin>>n;int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    x=fun(a,n,m);
    m=1;
    y=fun(a,n,m);
    cout<<min(x,y)<<endl;
    return 0;
}