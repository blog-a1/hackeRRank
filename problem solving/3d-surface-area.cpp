#include<iostream>
using namespace std;
int main()
{
    int h,w,s=0;cin>>h>>w;int a[h+2][w+2];
    s+=2*h*w;
    for(int i=0;i<h+2;i++)
        for(int j=0;j<w+2;j++)      a[i][j]=0;
    for(int i=1;i<h+1;i++)
        for(int j=1;j<w+1;j++)      cin>>a[i][j];
    for(int i=1;i<h+1;i++)
        for(int j=1;j<w+1;j++)
        {
            if(a[i][j]>a[i-1][j])       s+=(a[i][j]-a[i-1][j]);
            if(a[i][j]>a[i+1][j])       s+=(a[i][j]-a[i+1][j]);
            if(a[i][j]>a[i][j-1])       s+=(a[i][j]-a[i][j-1]);
            if(a[i][j]>a[i][j+1])       s+=(a[i][j]-a[i][j+1]);
        }
    cout<<s<<endl;
    return 0;
}