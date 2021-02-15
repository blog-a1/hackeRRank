#include<iostream>
using namespace std;
int main()
{
    int n,k,b,c=0;cin>>n>>k;int a[k];
    for(int i=0;i<k;i++)        a[i]=0;
    for(int i=0;i<n;i++)
    {
        cin>>b;a[b%k]++;
    }
    for(int i=0;i<=k/2;i++)
    {
        if(i==0)
        {
            if(a[i]>0)      c++;
        }
        else if(i==k-i)
        {
            if(a[i]>0)      c++;
        }
        else
        {
            if(a[i]>a[k-i])     c+=a[i];
            else        c+=a[k-i];
        }
    }
    cout<<c<<endl;
    return 0;
}