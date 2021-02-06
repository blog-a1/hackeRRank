#include<iostream>
using namespace std;
int main()
{
    long int n,m,p=0,q=0,x;cin>>n>>m;long int a[n],l[n],r[n];
    for(int i=0;i<n;i++)
    {
        a[i]=-1;r[i]=0;l[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;a[x]=x;
    }
    for(int i=0;i<n;i++)
    {
        p=0;q=0;
        for(int j=i,k=i;j<n||k>=0;j++,k--)
        {
            if(j<n)
            {
                if(a[j]==-1)        p++;
                else
                {
                    r[i]=p;break;
                }
            }
            if(k>=0)
            {
                if(a[k]==-1)        q++;
                else
                {
                    l[i]=q;break;
                }
                
            }
        }
    }
    int s=r[0],t=l[0];
    for(int i=0;i<n;i++)
    {
        if(r[i]>s)      s=r[i];
        if(l[i]>t)      t=l[i];
    }
    (s>t)?cout<<s:cout<<t;
    return 0;        
}