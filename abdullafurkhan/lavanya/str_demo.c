#include<stdio.h>
#include<string.h> 
void main() 
{
    char name [5]="latha";
    char new[100]="hello";
    printf("%c",name[3]);//access
    printf("%length of string %d\n",strlen(name));
    strcat(new,name);//new= hello+jwalitha
    printf("%s",new);

}