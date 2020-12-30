#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int j=0;j<n;j++)
    {
        if(a[j]<38)     cout<<a[j]<<endl;
        else if(a[j]%5>=3)    cout<<a[j]+(5-a[j]%5)<<endl;
        else cout<<a[j]<<endl;
    }
    return 0;
}