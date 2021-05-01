#include<iostream>
using namespace std;
int main()
{
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            int b=i-1,c=i;
            while(a[c]<a[b])
            {
                int temp=a[c];
                a[c]=a[b];
                a[b]=temp;
                c--;b=c-1;
            }
        }
        for(int i=0;i<n;i++)
            cout<<a[i]<<" ";
        cout<<endl;
    }
    return 0;
}