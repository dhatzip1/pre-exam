#include <stdio.h>
int main()
{
    int ch=getchar();
    if(ch>='a')
    {
        ch=ch-('a'-'A');
        printf("%c\n",ch);
    }
    else
    {
        ch=ch+('a'-'A');
        printf("%c\n",ch);
    } 
}