//write a function which will accept one input parameters r and return this parimeter of circle,declar pi  as a constant
#include<stdio.h>
float perimeter(int r)
{
 const float pi =3.14;
float poc =2*pi*r;
return poc;
}
void main()
{
    int r=18;  
    printf(" poc is %f", perimeter(r));
}