#include<iostream>
using namespace std;
int main()
{
    int r,c,n;cin>>r>>c>>n;char a[r][c];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)        cin>>a[i][j];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)        cout<<a[i][j]<<" ";cout<<endl;
    }
    for(int i=0;i<r;i++)    
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='o')        a[i][j]='e';
        }
    cout<<endl<<"after converting"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)        cout<<a[i][j]<<" ";cout<<endl;
    }
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            if(a[i][j]!='e')        a[i][j]='o';
        }
    cout<<endl<<"after converting o: "<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)        cout<<a[i][j]<<" ";cout<<endl;
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j]=='e')
            {
                a[i-1][j]='.';
                a[i+1][j]='.';
                a[i][j-1]='.';
                a[i][j+1]='.';
            }
        }
    }
    cout<<endl<<"after blasting"<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)        cout<<a[i][j]<<" ";cout<<endl;
    }
    return 0;
}