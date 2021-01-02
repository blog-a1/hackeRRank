#include<iostream>
using namespace std;
int main()
{
  int n,k,b,s=0;cin>>n>>k;int a[n];
  for(int i=0;i<n;i++)    cin>>a[i];
  cin>>b;
  for(int i=0;i<n;i++)    s+=a[i];
  if((s-a[k])/2==b)   cout<<"Bon Appetit"<<endl;
  else cout<<b-(s-a[k])/2<<endl;
  return 0;
}