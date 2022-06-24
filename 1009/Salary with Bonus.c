#include <stdio.h>
int main()
{
    char name;
    double salary, sold, total;
    scanf("%s %lf %lf", &name, &salary, &sold);
    total = salary + (sold * .15);
    printf("TOTAL = R$ %0.2lf\n", total);

    return 0;
}