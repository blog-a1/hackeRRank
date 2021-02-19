#include<iostream>
#include<cstring>
using namespace std;
int main()  
{  
    int t,i,j,k,l,c,m=0;char s[100],d[100],temp;cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>s;c=0;
        for(j=strlen(s)-1;j>0;j--)
            if(s[j]>s[j-1])
            {
                c=1;break;
            }
        if(c==0)        cout<<"no answer"<<endl;
        else
        {
            for(k=j,l=0;s[k]!='\0';k++,l++)     d[l]=s[k];
            d[l]='\0';m=0;
            for(l=1;d[l]!='\0';l++)
                if(d[m]>d[l])
                    if(d[l]>s[j-1])     m=l;
            temp=s[j-1];
            s[j-1]=d[m];
            s[j]='\0';
            d[m]=temp;
            for(k=0;k<strlen(d)-1;k++)
                for(l=0;l<strlen(d)-1-k;l++)
                    if(d[l]>d[l+1])
                    {
                        temp=d[l];
                        d[l]=d[l+1];
                        d[l+1]=temp;
                    }
            cout<<s<<d<<endl;
        }
    }
    return 0; 
}