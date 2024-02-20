#include <stdio.h> 
int main(int argc, char **argv)
{
	FILE* ptr;
	ptr = fopen(argv[1], "r");
    char ch;
    ch=fgetc(ptr);
    while (ch!=EOF)
    {
        printf("%c\n",ch);
        ch=fgetc(ptr);
    }
}