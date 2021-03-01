#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int n,m,r;cin>>n>>m>>r;
    vector<vector<int>>matrix(n,vector<int>(m)); 
    for(int i=0;i<n;i++) 
        for(int j=0;j<m;j++)        cin>>matrix[i][j];
    int space=min(m,n)/2; 
    vector<vector<int>>g;g.resize(space); 
    int a=n,b=m,x=0,y=0; 
    for(int i=0;i<space;i++) 
    {
        for(int j=i;j<a;j++) 
            g[i].push_back(matrix[j][i]);

        for(int j=i+1;j<b;j++) 
            g[i].push_back(matrix[a-1][j]);
             
        a--;b--;
        for(int j=a-1;j>=x;j--) 
            g[i].push_back(matrix[j][b]);

        x+=1; 
        for(int j=b-1;j>y;j--) 
            g[i].push_back(matrix[i][j]);

        y+=1;         
    }
    for(int i=0;i<space;i++)
        rotate(g[i].begin(),g[i].end()-r%g[i].size(),g[i].end());
    for(int i=0;i<space;i++) 
    {
        int c=0;
        for(int j=i;j<n-1-i;j++)
            matrix[j][i]=g[i][c++];

        for(int j=i;j<m-1-i;j++)
            matrix[n-1-i][j]=g[i][c++];

        for(int j=n-1-i;j>i;j--)
            matrix[j][m-1-i]=g[i][c++]; 

        for(int j=m-1-i;j>i;j--)
            matrix[i][j]=g[i][c++];        
    } 
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout<<matrix[i][j]<<" ";cout<<endl; 
    }
    return 0 ;
}