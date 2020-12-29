#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,s=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    int *m=max_element(a,a+n);
    for(int j=0;j<n;j++)
        if(a[j]==*m)    s++;
    cout<<s<<endl;
    return 0;
}