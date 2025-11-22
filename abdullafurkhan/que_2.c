// write a c program add 3 numbers and called by 3 refrence!  
#include <stdio.h>
struct score{
    float marks;
    int rank;
};
void edit (struct score s1)
{
    printf ("before change in fn : %f\n", s1.marks);
    s1.marks = 77.9;
    printf("after change in fn : %f\n", s1.marks);
}
void main()
{
    struct score s1 = {55.9, 2};
    edit(s1);
    printf("after change in main %f\n",s1.marks);

}
