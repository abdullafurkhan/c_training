#include <stdio.h>
#include <stdlib.h>
void main()
{
    float*p = (float*)calloc(4, sizeof(float));
    p[0] = 78.9;
    p[1] = 90.99;
    p[2] = 100.66;
    p[3] = 125.88;
    printf("%f\n", p[0]);
    free(p);
}
