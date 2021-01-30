#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,p,q,r,s,a,c=0,m=0;cin>>p>>q;
    for(int i=p;i<=q;i++)
        {
            a=i;
            while(a>0)
            {
                a/=10;c++;
            }
            n=i*i;r=pow(10,c);
            s=n%r+n/r;
            if(s==i)
            {
                cout<<i<<" ";m++;
            }        
            c=0;
        }
    if(m==0)        cout<<"INVLAID RANGE"<<endl;      
    return 0;
}