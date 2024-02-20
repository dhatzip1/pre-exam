#include <stdio.h>
#include <stdlib.h>


int ekp(int a, int b)
{
    int gcd=1;
    int i, min;
    if (a<b)
    {
        min=a;
    }
    else
    {
        min=b;
    }
    for(i=1;i<=min;i++)
    {
        if ((a%i)==0 && (b%i)==0)
        {
            gcd=i;
        }
    }
    return a*b/gcd;
}

int main()
{
    int a,b;
    scanf("%d",&a);
    scanf("%d", &b);
    printf ("%d %d \n",a,b);
    printf ("%d \n",ekp(a,b));
    return 0;
}