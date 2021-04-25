#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
long long str[5004][5004];
int main() 
{
    string s1,s2;cin>>s1>>s2;
    int l1=s1.length();
    for(int i=0;i<=l1;i++)
    {
      for(int j=0;j<=l1;j++)
      {
        if(i==0||j==0)    str[i][j]=0;
        else if(s1[i-1]==s2[j-1])
            str[i][j]=str[i-1][j-1]+1; 
        else
            str[i][j]=max(str[i-1][j],str[i][j-1]);
        }
    }
    cout<<str[l1][l1]<<endl;
    return 0;
}
