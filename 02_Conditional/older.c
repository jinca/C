#include <stdio.h>

int main()
{ 
    int a, b, c, mayor;
   
    scanf("%d,%d,%d",&a,&b,&c);
    
    if (a > b && a> c)
    { mayor = a; }
 
    if(b > a && b> c)
    {  mayor=b;}
 
    if(c > a && c> b)
    { mayor=c;}
      
    printf("%d\n", mayor);
    
    return 0;
}
