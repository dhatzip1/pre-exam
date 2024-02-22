#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char **argv)
{
	FILE* ptr;
	ptr = fopen(argv[1], "r");
	int j=0,i=0, ch;
    while((ch=fgetc(ptr))!=EOF)
    {
        //printf("%c\n",ch);
        i++; 
    }
    //vrisko mhkos arxeiou


    char *p=malloc(i*sizeof(char));
    fseek(ptr,0,SEEK_SET);
    for(j=0;j<i;j++)
    {
        p[j]=fgetc(ptr);
    }
    //ta vazo se pinaka, pleon ektos arxeiou


    int length = strlen(p);
    //mikos symvoloseiras
    
    
    int l=atoi(argv[2]);
    char *pt=malloc(l*sizeof(char));
    for(j=0;j<l;j++)
    {
        pt[j]=p[j];
    }


    for(j=0;j<i;j++)
    {
        printf("%c ",p[j]);
    }
    printf("\n");

    for(j=0;j<l;j++)
    {
        printf("%c ", pt[j]);
    }
     printf("\n");
    //tipono ta prota argv[2] grammata


    int result = strcmp(p, pt);
    printf("cmp result: %d\n", result);
    if(result == 0) 
    {
        printf("Strings are equal.\n");
    } 
    else if(result < 0) 
    {
        printf("str1 is less than str2.\n");
    } 
    else 
    {
        printf("str1 is greater than str2.\n");
    }



    j=0;
    while(j<l)
    {
        pt[l]='m';
        j++;
    }
    j=0;
    //xalao ton pinaka pt
    while(j<l)
    {
        printf("%c ", pt[l]);
        j++;
    }
    printf("\n");
    
    char *newp=malloc(l*sizeof(char));
    strcpy(newp, p);
    printf("Copied string is: %s\n", pt);


    free (pt);
    return 0;
}