#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n],temp;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int k=n-1;k>=0;k--){
        printf("%d ",a[k]);
    }
    return 0;
}
