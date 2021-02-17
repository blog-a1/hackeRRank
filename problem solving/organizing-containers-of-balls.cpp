#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int q,n;cin>>q;
	while(q--)
    {
		long int t=1,c=0,s=0;cin>>n;
		long int a[n][n],b[2*n];
		for(long int i=0;i<n;i++)
        {
			s=0;
			for(long int j=0;j<n;j++)
            {
				cin>>a[i][j];
				s+=a[i][j];
			}
			b[c++]=s;
		}
		for(long int i=0;i<n;i++)
        {
			s=0;
			for(long int j=0;j<n;j++)       s+=a[j][i];
			b[c++]=s;
		}
		sort(b,b+n);
		sort(b+n,b+n*2);
		c=n;
		for(long int i=0;i<n;i++)
            if(b[i]!=b[c++])        t=0;
		cout<<(t?"Possible":"Impossible")<<endl;
	}
    return 0;
}