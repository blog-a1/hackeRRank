#include<iostream>
using namespace std;
int main()
{
    int b,n,m,c=-1;cin>>b>>n>>m;int a[n],d[m];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<m;i++)        cin>>d[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            if((a[i]+d[j])<=b&&(a[i]+d[j])>c)
                c=a[i]+d[j];
    cout<<c<<endl;                 
    return 0;
}