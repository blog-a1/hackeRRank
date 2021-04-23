#include<iostream>
#include<cstring>
using namespace std;
#define big 1000000007

long long int inn(long long int p,long long int q,long long int r)
{
    if(q==0)        return 1;
    long long int a=inn(p,q/2,r)%r;
    a=(a*a)%r;
    return (q%2==0)?a:(p*a)%r;
}
int main()
{
    string s;int q;cin>>s>>q;
    int l=s.length();
    long long int b[l+1],c[l+1];
    b[0]=1;c[0]=1;int d[l+1][26];
    for(int i=1;i<=l;i++)
    {
        b[i]=(b[i-1]*i)%big;
        c[i]=inn(b[i],big-2,big);
    }
    memset(d,0,sizeof(d));
    for(int i=1;i<=l;i++)
        d[i][s[i-1]-'a']++;
    for(int i=2;i<=l;i++)
    {
        for(int j=0;j<26;j++)
            d[i][j]+=d[i-1][j];
    }
    for(int i=0;i<q;i++)
    {
        int e,f,g=0,h=0;cin>>e>>f;
        long long int m=1,n=0;
        for(int i=0;i<26;i++)
        {
            int v=d[f][i]-d[e-1][i];
            if(v%2!=0)      h++;
            g+=v/2;
            m=(m*c[v/2])%big;
        }
        n=b[g];
        long long int z=(n*m)%big;
        if(h!=0)        z=(z*h)%big;
        cout<<z<<endl;
    }
    return 0;
}