#include<iostream>
using namespace std;
int main()
{
    int t,n,a,b,i,j,k,temp;cin>>t;
    for(int l=0;l<t;l++)
    {
        cin>>n>>a>>b;int c[n];
        for(i=n-1,j=0;j<n;i--,j++)      c[j]=(a*i)+(b*j);
        for( i=0,k=0;i<n;i++)
        {
            if(c[i]!=0)
            {
                for( j=i+1;j<n;j++)
                    if(c[i]==c[j])      c[j]=0;
                c[k]=c[i];k++;
            }
        }
        for(i=0;i<k-1;i++)
            for(j=0;j<k-i-1;j++)
                if(c[j]>c[j+1])
                {
                    temp=c[j];
                    c[j]=c[j+1];
                    c[j+1]=temp;
                }
        for(i=0;i<k;i++)
            cout<<c[i]<<" ";
        cout<<endl;
    }
    return 0;
}