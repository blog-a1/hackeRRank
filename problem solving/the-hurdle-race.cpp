#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,b;cin>>n>>k;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    sort(a,a+n);
    //if(a[n-1]>k)        cout<<a[n-1]-k<<endl;
    //else        cout<<"0"<<endl;
    (a[n-1]>k)?cout<<a[n-1]-k<<endl:cout<<"0"<<endl;
    return 0;
}