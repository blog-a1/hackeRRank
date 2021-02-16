#include<iostream>
using namespace std;
int main()
{
    long long int n,k,qr,qc,u,d,l,r,ul,ur,dl,dr,ro,co,i;
    cin>>n>>k>>qr>>qc;
    u=qr-1;
    d=n-qr;
    l=qc-1;
    r=n-qc;
    ul=(u<=l)?u:l;
    ur=(u<=r)?u:r;
    dl=(d<=l)?d:l;
    dr=(d<=r)?d:r;
    
    for(i=0;i<k;i++)
    {
        cin>>ro>>co;
        if(ro==qr)
        {
            if(co<qc)
            {
                if(qc-co-1<l)       l=qc-co-1;
            }
            else
            {
                if(co-qc-1<r)       r=co-qc-1; 
            }      
        }   
        else if(co==qc)
        {
            if(ro<qr)
            {
               if(qr-ro-1<u)        u=qr-ro-1;
            }
            else 
            {
                if(ro-qr-1<d)       d=ro-qr-1;
            }
        }       
        else if(ro<qr)
        {
            if(co<qc)
            {
                if(qr-ro==qc-co)
                    if(qr-ro-1<ul)      ul=qr-ro-1;
            }
            else 
            {
                if(qr-ro==co-qc)
                    if(qr-ro-1<ur)      ur=qr-ro-1;
            }
        }     
        else if(ro>qr)
        {
            if(co<qc)
            {
               if(ro-qr==qc-co)
                    if(ro-qr-1<dl)      dl=ro-qr-1;
            }
            else 
            {
               if(ro-qr==co-qc)
                    if(ro-qr-1<dr)      dr=ro-qr-1;
            } 
        }       
    } 
    cout<<u+d+l+r+ul+ur+dl+dr;
    return 0;
}