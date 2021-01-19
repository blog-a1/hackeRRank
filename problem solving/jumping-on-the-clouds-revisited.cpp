#include<iostream>
using namespace std;
//e=energy  k=jump size     
int main()
{
    int n,k,e=100,j=0;cin>>n>>k;int c[n];
    for(int i=0;i<n;i++)        cin>>c[i];
    do
    {
        j=(j+k)%n;e--;
        if(c[j]==1)     e-=2;
    }while(j!=0);
    cout<<e<<endl;
    return 0;
}