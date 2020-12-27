#include<iostream>
using namespace std;
int main()
{
    int n,s=0,c=0;cin>>n;int a[n][n];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
    for(int k=0;k<n;k++)
        for(int l=0;l<n;l++)
        {
            if(k==l)    s+=a[k][l];
            if((k+l)==n-1)  c+=a[k][l];
        }
    cout<<abs(s-c)<<endl;
}