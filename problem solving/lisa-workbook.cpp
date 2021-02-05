#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,k,m=1,p=1,c=0;cin>>n>>k;int a[n];
    for(int i=1;i<=n;i++)        cin>>a[i];
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(j<=m*k)
                if(p==j)        c++;
            else
            {
                p++;
                if(p==j)        c++;m++;
            }
        }
        p++;m=1;
    }
    cout<<c<<endl;
    return 0;
}