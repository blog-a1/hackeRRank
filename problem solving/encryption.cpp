#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int main()
{
    char c[100],a[100][100];int s,l,n=0;gets(c);
    for(int i=0;c[i]!='\0';i++)
        if(c[i]==' ')   
        {
            for(int j=i;c[j]!='\0';j++)     c[j]=c[j+1];
        }
    l=strlen(c);s=sqrt(l);
    if(s*s==l)
    {
        for(int i=0;i<s;i++)
        {
            for(int j=0;j<s;j++,n++)        a[i][j]=c[n];
        }
    }
    else if(s*(s+1)>=l)
    {
        for(int i=0;i<s;i++)
            for(int j=0;j<s+1;j++,n++)      a[i][j]=c[n];
    }
    else
    {
        for(int i=0;i<s+1;i++)
            for(int j=0;j<s+1;j++,n++)      a[i][j]=c[n];
    }
    for(int i=0;i<=s;i++)
    {
        for(int j=0;j<=s;j++)
        {
            if(a[j][i]!='\0')       cout<<a[j][i];
        }
        cout<<" ";
    }
   return 0; 
}