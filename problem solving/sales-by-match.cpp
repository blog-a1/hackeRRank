#include<iostream>
using namespace std;
int main()
{
    int n,s,c=0;cin>>n;int a[n],b[100];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int j=1;j<=100;j++)
    {
        for(int i=0;i<n;i++)
            if(j==a[i])     c++;
        b[j]=c;
        c=0;
    }
    for(int i=1;i<=100;i++)
    {
        s+=(b[i]/2);
    }
    cout<<s<<endl;
    return 0;
}