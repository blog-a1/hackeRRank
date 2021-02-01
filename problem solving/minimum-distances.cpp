#include<iostream>
using namespace std;
int main()
{
    int n,m=0;cin>>n;int a[n];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
            if(a[i]==a[j])
                if(m==0||m>j-i)        m=j-i;  
    (m==0)?cout<<-1<<endl:cout<<m<<endl;
    return 0;
}