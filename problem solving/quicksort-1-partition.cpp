#include<iostream>
#include<vector>
using namespace std;

void partition(int a[],int l,int r)
{
    int pivot=a[l];
    while(l!=r)
    {
        if(pivot==a[l]) 
        {
            if(a[r]>pivot)      r=r-1;
            else if(a[r]<=pivot)
            {
                swap(a[l],a[r]);
                pivot=a[r];
                l=l+1;
            }
        }
        else if(pivot==a[r])
        {
            if(a[l]<pivot)      l=l+1;
            else if(a[l]>=pivot)
            {
                swap(a[l],a[r]);
                pivot=a[l];
                r=r-1;
            }
        }
    }
}

void print(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

int main()
{
    int n;cin>>n;int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    partition(a,0,n-1);
    print(a,n);
    return 0;
}