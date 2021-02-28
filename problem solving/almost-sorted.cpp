#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,i,j,b,e;cin>>n;int a[n];
    for(i=1;i<=n;i++)     cin>>a[i];
    for(i=1;i<n;i++)
        if(a[i]>a[i+1])     break;
    if(i==n)        cout<<"yes"<<endl;
    else
    {
        if(n==2)        cout<<"yes"<<endl<<"swap 1 2"<<endl;
        else
        {
            for(i=1;i<n;i++)
                if(a[i]>a[i+1])
                {
                    b=i;break;
                }
            for(i=n;i>1;i--)
                if(a[i]<a[i-1])
                {
                    e=i;break;
                }
            swap(a[b],a[e]);
            for(i=1;i<n;i++)
                if(a[i]>a[i+1])     break;
            if(i==n)        cout<<"yes"<<endl<<"swap "<<b<<" "<<e<<endl;
            else
            {
                swap(a[b],a[e]);i=b;j=e;
                while(i<j)
                {
                    swap(a[i],a[j]);i++;j--;
                }
                for(i=1;i<n;i++)
                    if(a[i]>a[i+1])     break;
                if(i==n)        cout<<"yes"<<endl<<"reverse "<<b<<" "<<e<<endl;
                else        cout<<"no"<<endl; 
            }
        }
    } 
    return 0;
}