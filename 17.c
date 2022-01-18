#include <stdio.h>
int main()
{
    float n = 0;
    int m = 0;
    int i;

    while (scanf("%d", &i) != EOF)
    {
        m++;
        n += i;
    }
    printf("Size: %d\nAverage: %.3f\n", m, (n / m) + 0.0005);

    return 0;
}