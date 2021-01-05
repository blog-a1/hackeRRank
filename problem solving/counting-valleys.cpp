#include<iostream>
using namespace std;
int main()
{
    int n,c=0,s=0;cin>>n;char a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]=='U')       a[i]=1;
        else a[i]=-1;
    }
    for(int i=0;i<n;i++)
    {
        s+=a[i];
        if(s==0&&a[i]==1)       c++;
    }
    cout<<c<<endl;
    return 0;
}