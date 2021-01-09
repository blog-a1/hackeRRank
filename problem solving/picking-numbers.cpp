#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,c=1,s=1;cin>>n;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    sort(a,a+n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j]||a[j]==a[i+1]+1)        c++;
        s=(s>c)?s:c;
        c=1;
    }
    cout<<s<<endl;
    return 0;
}