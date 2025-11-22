// create a structure with 3 variables names of the car, max speed ,price!, stores in array and display the results 
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct car
{
  int price[300];
  float max_speed;
  char name;

};
void main()
{
    int n;
    printf("enter number of car:");
    scanf("%d", &n);
    struct car c[n];
    for(int i = 0;i<n;i++)
{
printf("enter price of car :");
scanf("%d", c[i].price);

printf("enter max_speed:");
scanf("%f", &c[i].max_speed);

printf("enter name of car:");
scanf("%s", &c[i].name);
}

for (int i = 0; i < n; i++)
{
printf("%d\n",c[i].price);
printf("%f\n",c[i].max_speed);
printf("%s\n",c[i].name);
}
}



