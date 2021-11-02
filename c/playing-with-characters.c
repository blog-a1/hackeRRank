#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h> 
int main() 
{
    int MAX_LEN =256;
    char ch1,ch2[MAX_LEN],ch3[MAX_LEN];
    scanf("%c\n%s\n",&ch1,&ch2);
    scanf("%[^\n]%*c",&ch3);
    printf("%c\n%s\n%s\n",ch1,ch2,ch3);   
    return 0;
}
