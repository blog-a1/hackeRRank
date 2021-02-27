#include<iostream>
using namespace std;
int main()
{
    int t,n;cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>n;int a[n],c=0;
        for(int i=0;i<n;i++)        cin>>a[i];
        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++)      if(a[i]>a[j])       c++;
        if(c%2==0)        cout<<"YES"<<endl;
        else        cout<<"NO"<<endl;  
    }
    return 0;
}