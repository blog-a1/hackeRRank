#include<iostream>
using namespace std;
int main()
{
    int n,p;cin>>n;int a[n];
    for(int i=1;i<=n;i++)
    {
        cin>>p;a[p]=i;
    }
    for(int i=1;i<=n;i++)       cout<<a[a[i]]<<endl;    
    return 0;
}