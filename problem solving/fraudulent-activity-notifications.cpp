#include<iostream>
using namespace std;
int a[2000001],b[201]={0};
int median(int d)
{
    int s=0;
    for(int i=0;i<201;i++)
    {
        s+=b[i];
        if(2*s>d)      return (2*i);
        else if(2*s==d)
        {
            for(int j=i+1;;j++)
                if(b[j])     return i+j;
        }
    }
    return -1;
}
int main()
{
    int n,d,c=0;
    cin>>n>>d;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(i>=d)
        {
            if(a[i]>=median(d))      c++;
            b[a[i-d]]--;
        }
        b[a[i]]++;
    }
    cout<<c<<endl;
    return 0;
}