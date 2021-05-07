#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main()
{
    int n,m,min=INT_MAX;cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(int j=0;j<n;j++)
    {
        m=abs(a[j]-a[j+1]);
        if(m<min)       min=m;
    }
    for(int k=0;k<n;k++)
    {
        m=abs(a[k]-a[k+1]);
        if(m==min)
        {
            cout<<a[k]<<" "<<a[k+1]<<" ";
        }
    }
    return 0;
}