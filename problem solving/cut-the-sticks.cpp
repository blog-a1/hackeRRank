#include<iostream>
using namespace std;
int main()
{
    int n,min,i,c=0;cin>>n;int a[n];  
    for(int i=0;i<n;i++)        cin>>a[i];
    while(1)
    {
        for(i=0;i<n;i++)
            if(a[i]>0)
            {
                min=a[i];break;
            }
        for(int j=i;j<n;j++)
        {
            if(min>a[j]&&a[j]>0)        min=a[j];
        }
        if((n-c)!=0)        cout<<n-c<<endl;
        else        break;
        for(i=0;i<n;i++)
        {
            a[i]=a[i]-min;
            if(a[i]==0)     c++;
        }
    }
    return 0;
}