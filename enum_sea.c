#include <stdio.h>
enum month
{
    jan = 1,
    feb,march,apr,may,june,jul,aug,sep,oct,nov,dec
};
void main()
{
    enum month m;
    m = may;
    char *season;
    switch(m)
    {
        case feb: case jan: case dec:
        season = "winter"; break;
        case march: case apr: case may:
        season = "summer"; break;
        case  june: case jul: case aug:
        season = "monsoon"; break;
        case sep: case oct : case nov:
        season = "winter"; break;  

    }
    printf("%d is  %s\n",m ,season);
}