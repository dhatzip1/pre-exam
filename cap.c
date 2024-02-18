#include <stdio.h>
int main()
{
    int ch=getchar();
    ch=ch-('A'-'a');
    printf("%c\n",ch);
}