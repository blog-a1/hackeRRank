#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool fun(string x,string y)
{
    if(x.length()!=y.length())
        return(x.length()<y.length());
    else        return(x<y);
}
int main()
{
    int n;cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end(),fun);
    for(string s:v)
        cout<<s<<endl;
    return 0;
}