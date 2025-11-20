#include<stdio.h>
int main()
{
    int result=1;
    int n;
    printf("enter n");
    scanf("%d",&n);
for(int i=1;i<=n;i++)
{
    result=result*i;
}
printf("%d prod",result);

}