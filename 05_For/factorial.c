#include <stdio.h>

int main() {

    int fact=1, c, n;
   
    scanf("%d",&n);
    
    for (c = n; c > 0; c--)
    {
        fact = fact * c;
    }
    
    printf("%d",fact);
    
    return 0;
}
