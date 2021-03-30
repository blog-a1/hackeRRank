#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<regex>
using namespace std;
int main()
{
    int t;cin>>t;
    regex r(".+@gmail\\.com$");
    vector<string>v;
    for(int i=0;i<t;i++)
    {
        string n,e;cin>>n>>e;
        if(regex_match(e,r))        v.push_back(n);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;
    return 0;
}