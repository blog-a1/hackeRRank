#include<iostream>
using namespace std;
int main()
{
    int n,d,m,s=0,c=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)    cin>>a[i];
    cin>>d>>m;
    for(int i=0;i<n-(m-1);i++)
    {
        for(int j=i;j<m+i;j++)
            s+=a[j];
        if(s==d)    c++;
        s=0;
    }
    cout<<c<<endl;    
    return 0;
}
