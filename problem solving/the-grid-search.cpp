#include<iostream>
using namespace std;
int main()
{
    int t,R,C,r,c,i,j,n=0;cin>>t;
    for(int k=0;k<t;k++)
    {
        cin>>R>>C;char g[R][C];
        for(i=0;i<R;i++)
            for(j=0;j<C;j++)        cin>>g[i][j];
        cin>>r>>c;char p[r][c];
        for(i=0;i<r;i++)
            for(j=0;j<c;j++)        cin>>p[i][j];
        for(i=0;i<=R-r;i++)
        {
            for(j=0;j<=C-c;j++)
            {
                if(g[i][j]==p[0][0])
                {
                    for(int l=0,m=i;l<r;l++,m++)
                    {
                        for(int x=0,y=j;x<c;x++,y++)
                        {
                            if(g[m][y]==p[l][x])        n=1;
                            else
                            {
                                n=0;break;
                            }
                        }
                        if(n==0)        break;  
                    }
                }
                if(n==1)        break;
            }
            if(n==1)        break;
        }
        (n==1)?cout<<"YES"<<endl:cout<<"NO"<<endl;n=0;
    }
    return 0;
}