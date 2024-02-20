#include <stdio.h>

void tax(int *a)
{
    for(int i=0;i<=9;i++)
    {
        for(int j=0;j<=i;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}


int main()
{
    int i, a[]={0,9,8,6,7,3,4,5,2,1};
    int *p=a;
    for(i=0;i<=9;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    tax(p);
    for(i=0;i<=9;i++)
    {
        printf("%d\t",p[i]);
    }
}