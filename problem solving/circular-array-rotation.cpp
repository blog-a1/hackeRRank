#include<iostream>
using namespace std;
int main()
{
    int n,k,q,x;cin>>n>>k>>q;int a[n],b[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    int r=k%n;
    for (int i=0;i<n;i++) 
    {
        b[r++]=a[i];
        if (r==n) r=0;
    }
    for(int i=0;i<q;i++)
    {
        cin>>x;cout<<b[x]<<endl;
    }        
    return 0;
}