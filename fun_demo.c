#include<stdio.h>
int nwadd(int a,int b)

{
    int sum=a+b;
    return sum;
}
void main()
{
int a=5;
int b=4;
printf("%d \n", nwadd(a,b));
int c=99;
int d=12;
printf("%d \n",nwadd(c,d));
}