#include<iostream>
using namespace std;
int main()
{
    int n,t,start,end,m=0;cin>>n>>t;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<t;i++)
    {
        cin>>start>>end;
        for(start;start<=end;start++)
            if(m==0||m>a[start])        m=a[start];
        cout<<m<<endl;m=0;
    }
    return 0;
}