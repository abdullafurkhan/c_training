#include<stdio.h>
void main()
{
    char des [100]=" happy new year";
    char se[10]="kid";
    if((strstr(des,se))!=NULL)
    printf("found");
    else
    printf("not found");

}