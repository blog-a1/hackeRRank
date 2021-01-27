#include<iostream>
using namespace std;
int main()
{
    int n,k=0,x=0,y=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        x=a[i];
        for(int j=0;j<n;j++)
            if(a[i]==a[j])      k++;
        if(y<k)     y=k;
        k=0;
    }
    cout<<n-y<<endl;
    return 0;
}