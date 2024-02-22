#include <stdio.h>
#include <stdlib.h>

int isprime (int i)
    {
        int f=1,j;
        if (i==1)
        {
            return 0;
        }
        if (i==2)
        {
            return 1;
        }
        if(i%2==0)
        {
            f=0;
        }
        for(j=3;j*j<=i;j=j+2)
        {
            if(i%j==0)
            {
                f=0;
                break;
            }
        }
        return f;
    }

int main(int argc,  char *argv[])
{
    long long  rem,j,i=atoi(argv[1]);
    int c;
    rem=i;
    for(j=2;j<=i;j++)
    { 
        if (isprime(j))
        {
            c=0;
            while(rem%j==0)
            {
                rem=rem/j;
                c++;
            }
            if(c>0)
            {
                printf ("%lld ^ %d\n",j,c);
            } 
        }
        if (rem==1)
        {
            break;
        }
    }
    
}