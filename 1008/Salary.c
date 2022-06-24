#include <stdio.h>
int main()
{
    int EMPLOY, WORK;
    float AMMOUNT, SALARY;
    scanf("%d %d %f", &EMPLOY, &WORK, &AMMOUNT);
    SALARY = WORK * AMMOUNT;
    printf("NUMBER = %d\n", EMPLOY);
    printf("SALARY = U$ %0.2f\n", SALARY);

    return 0;
}