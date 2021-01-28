#include<iostream>
using namespace std;
int main()
{
    int n,m,c1=0,c2=0,c3=0;cin>>n>>m;char a[n][m];
    for(int i=0;i<n;i++)        cin>>a[i];
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
        {
            c1=0;
            for(int k=0;k<m;k++)
                if(a[i][k]=='1'||a[j][k]=='1')      c1++;
            if(c2==c1)      c3++;
            else if(c2<c1)
            {
                c2=c1;c3=1;
            }
        }
    cout<<c2<<endl<<c3;
    return 0;
}