    #include<iostream>
    #include<algorithm>
    #include<cmath>
    #include<cstdlib>
    using namespace std;
    int main()
    {
        int a[9],c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0;
        for(int i=0;i<9;i++)        cin>>a[i];
        int b[9]={8,1,6,3,5,7,4,9,2},
        c[9]={6,1,8,7,5,3,2,9,4},
        d[9]={4,9,2,3,5,7,8,1,6},
        e[9]={2,9,4,7,5,3,6,1,8},
        f[9]={8,3,4,1,5,9,6,7,2},
        g[9]={2,7,6,9,5,1,4,3,8},
        h[9]={6,7,2,1,5,9,8,3,4},
        j[9]={4,3,8,9,5,1,2,7,6};

        for(int i=0;i<9;i++)
        {
            c1+=abs(b[i]-a[i]);
            c2+=abs(c[i]-a[i]);
            c3+=abs(d[i]-a[i]);
            c4+=abs(e[i]-a[i]);
            c5+=abs(f[i]-a[i]);
            c6+=abs(g[i]-a[i]);
            c7+=abs(h[i]-a[i]);
            c8+=abs(j[i]-a[i]);
        }
        int r[8]={c1,c2,c3,c4,c5,c6,c7,c8};
        sort(r,r+8);
        cout<<r[0]<<endl;    
        return 0;
    }
