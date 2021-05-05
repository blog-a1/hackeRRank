#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,m;cin>>n;
    vector<int>v(100);
    for(int i=0;i<n;i++)
    {
        cin>>m;v[m]++;
    }
    for(int j=0;j<100;j++)
        cout<<v[j]<<" ";
    return 0;
}