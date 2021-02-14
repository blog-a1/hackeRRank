#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n,cari=0,a,b,c;cin>>n;
    vector<int>v(1);v[0]=1;
    for(int i=2;i<=n;i++)
        for(int j=v.size()-1;j>=0;j--)
        {
            b=v[j];
            b*=i;b+=cari;
            c=b%10;
            cari=(b-c)/10;
            v[j]=c;
            if((j-1)>=0)        continue;
            else
            {
                while(cari>0)
                {
                    a=cari%10;
                    v.emplace(v.begin(),a);
                    cari=(cari-a)/10;
                }
            }
            
        }
    for(int i=0;i<v.size();i++)     cout<<v[i];cout<<endl;
    return 0;
}