#include<iostream>
using namespace std;
int main()
{
    long long int n,s=0;cin>>n;long long int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int j=0;j<n;j++)    s+=a[j]; 
    cout<<s<<endl; 
    return 0;
}