// write a function which will multiply 3 numbers call by refrence
#include <stdio.h>
void prod(int *a, int *b, int *c ) 
{
    int prod=(*a)* (*b) *(*c);
    printf("%d\n",prod);
}
void main()
{
    int a = 6;
    int b = 8;
    int c = 6;
    prod(&a,&b,&c);
}





