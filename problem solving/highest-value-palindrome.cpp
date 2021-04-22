#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    char s[n];cin>>s;
    int a[(n+1)/2]={0},b=0,c=m;
    if(n%2!=0)
        a[(n-1)/2]=1;
    while(b<n/2)
    {
        if(s[b]!=s[n-1-b])
        {
            s[b]=max(s[b],s[n-1-b]);
            s[n-b-1]=s[b];
            a[b]=1;
            m--;
        }
        b++;
    }
    if(c>=n)
    {
        for(int i=0;i<n;i++)
            cout<<'9';
    }
    else if(m<0)        cout<<"-1";
    else if(m==0)       cout<<s<<endl;
    else
    {
        b=0;
        while(m>0&&b<n/2)
        {
            if(a[b]==1&&s[b]!='9')
            {
                s[b]='9';
                s[n-1-b]='9';
                b++;m--;
            }
            else if(a[b]==0)
            {
                if(m>=2&&s[b]!='9')
                {
                    s[b]='9';
                    s[n-b-1]='9';
                    m-=2;
                    b++;
                }
                else        b++;
            }
            else        b++;
        }
        if(m>0)     s[n/2]='9';
        cout<<s<<endl;
    }
    return 0;
}