#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,r,s=0;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while(n>0)
    {
        r=n%10;
        s+=r;
        n/=10;
    }
    printf("%d",s);
    return 0;
}
