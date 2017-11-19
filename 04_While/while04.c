#include <stdio.h>

int main()
{
    int n, i=1;

    printf("Enter n, to be multiplied until 12\n");
    scanf("%d",&n);

    while (i<=12)
    {
       printf("%d * %d = %d\n",n,i,n*i);
       i++;
    }
    return 0;
}
