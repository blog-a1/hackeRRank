#include<iostream>
using namespace std;
int main()
{
  int n,c1=0,c2=0,c3=0,c4=0,c5=0;cin>>n;int a[n];
  for(int i=0;i<n;i++)  cin>>a[i];
  for(int i=0;i<n;i++)
  {
      if(a[i]==1)  c1++;
      else if(a[i]==2)  c2++;
      else if(a[i]==3)  c3++;
      else if(a[i]==4)  c4++;
      else  c5++;
  }
  if(c1>=c2&&c1>=c3&&c1>=c4&&c1>=c5)    cout<<1<<endl;
  else if(c2>=c1&&c2>=c3&&c2>=c4&&c2>=c5)    cout<<2<<endl;
  else if(c3>=c1&&c3>=c2&&c3>=c4&&c3>=c5)    cout<<3<<endl;
  else if(c4>=c1&&c4>=c2&&c4>=c3&&c4>=c5)    cout<<4<<endl;
  else if(c5>=c1&&c5>=c2&&c5>=c3&&c5>=c4)    cout<<5<<endl;
  return 0;
}
