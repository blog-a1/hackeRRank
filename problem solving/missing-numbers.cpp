#include<iostream>
#include<vector>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    int m,n;cin>>m;
    vector<int>a,b;
    while(m--)
    {
        int in;cin>>in;
        a.push_back(in);
    }
    cin>>n;
    while(n--)
    {
        int in;cin>>in;
        b.push_back(in);
    }
    set<int>c;
    for(int i=0;i<b.size();i++)
    {
        auto d=find(a.begin(),a.end(),b[i]);
        if(d==a.end())        c.insert(b[i]);
        else        a.erase(d);
    }
    for(int j:c)
        cout<<j<<" ";
    return 0;
}