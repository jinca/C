#include <stdio.h>

int main() {

    int n, c, sum=0, value;

    scanf("%d",&n);
    
    for(c=1;c<=n;c++)
        sum = sum + c;
    
    value = sum;
    
    printf("%d",value);
    
    return 0;
}
