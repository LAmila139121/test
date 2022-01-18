#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n, p;
    float r;
    scanf("%f %d %d", &r, &n, &p);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += p;
        sum += sum * r;
    }
    printf("%d\n", sum);
}