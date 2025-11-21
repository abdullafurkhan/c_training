#include<stdio.h>
int vloume (int l,int b,int h)
{


int v=l*b*h;
return v;
}
void main()
{
    int l=2;
    int b=2;
    int h=6;
    printf("%d  v",vloume(l,b,h));
}