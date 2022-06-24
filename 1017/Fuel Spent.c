#include <stdio.h>
int main()
{
    int X, Y;
    float Total;
    scanf("%d %d", &X, &Y);
    Total = ((float)X * Y) / 12;
    printf("%.3f\n", Total);

    return 0;
}