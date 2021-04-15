#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   int q,i,j;cin>>q;
   for(int t=0;t<q;t++) 
   {
       char s[100005];cin>>s;
       int c=0,len=strlen(s);
       for(i=0,j=len-1;i<len/2;i++,j--) 
       {
           if(s[i]!=s[j]) 
           {
               c=1;break;
           }
       }
       if(c==1) 
       {
           if(s[j]==s[i+1]&&s[j-1]==s[i+2])
                cout<<i<<endl;
           else     cout<<j<<endl;
       }
       else     cout<<-1<<endl;
   }
    return 0;
}