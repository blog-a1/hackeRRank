#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int n,m,p,c,s;char g[20][20];cin>>n>>m;
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)      cin>>g[i][j];

    for(int i=1;i<=n;i++) 
    {
        for(int j=1;j<=m;j++)
        {
            c=0;
            while(g[i+c][j]=='G' && g[i-c][j]=='G' && g[i][j+c]=='G' && g[i][j-c]=='G')
            {
                g[i+c][j]=g[i-c][j]=g[i][j+c]=g[i][j-c]='0';
                for(int k=1;k<=n;k++) 
                {
                    for(int l=1;l<=m;l++)
                    {
                        s=0;
                        while(g[k+s][l]=='G' && g[k-s][l]=='G' && g[k][l+s]=='G' && g[k][l-s]=='G')
                        {
                            p=max(p,(1+4*c)*(1+4*s));s++;
                        }
                    }
                }
                c++;
            }
            c=0;
            while(g[i+c][j]=='0' && g[i-c][j]=='0' && g[i][j+c]=='0' && g[i][j-c]=='0')
            {
                g[i+c][j]=g[i-c][j]=g[i][j+c]=g[i][j-c]='G';c++;
            }
        }
    }
    cout<<p<<endl;
    return 0;
}