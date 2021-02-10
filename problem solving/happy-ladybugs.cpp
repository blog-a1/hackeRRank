#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int g;cin>>g;
    for(int k=0;k<g;k++)
    {
        int n,c=0,m=0,s=0;string b;
        cin>>n>>b;
        for(int i=0;i<n;i++)
            if(b[i]=='_')
            {
                m=1;break;
            }
        for(int i=0;i<n;i++)
        { 
            c=0;
            if(b[i]!='_')
            {
                for(int j=0;j<n;j++)
                    if(b[i]==b[j])      c++;
            } 
            if(c==1)        break;
        }
        if(c!=1&&m==1)
        {
            cout<<"YES"<<endl;continue;
        }
        else if(m==0)
        {
           for(int i=0;i<n;i+=s)
           {
               s=0;
                for(int j=i;b[j]!=b[i],j<n;j++)
                {
                   if(b[i]==b[j])       s++;
                }
                if(s==1)        break;
           }
        }
        if(m==0&&s>1)
        {
            cout<<"YES"<<endl;continue;
        }
        else        cout<<"NO"<<endl;
    }
    return 0;
}
