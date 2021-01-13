#include<iostream>
using namespace std;
int main()
{
    int t,n,k;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n>>k;int a[n],c=0;
        for(int j=0;j<n;j++)        cin>>a[j];
        for(int i:a)
            if(a[i]<=0)     c++;
        (c>=k)?cout<<"NO"<<endl:cout<<"YES"<<endl;
    }
    return 0;
}