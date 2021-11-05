#include <stdio.h>
#include<math.h>

void update(int *a,int *b) {

    int m,d;
    m=*a+*b;
    d=abs(*a-*b);
    printf("%d\n%d",m,d); 
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);

    return 0;
}
