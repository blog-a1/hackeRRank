#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        int temp=a[i],j=i;
        while(j>0&&temp<a[j-1])
        {
            a[j]=a[j-1];
            for(int i=0;i<n;i++)
                cout<<a[i]<<" ";
            cout<<endl;
            j-=1;
        }
        a[j]=temp;  
    }
    for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}