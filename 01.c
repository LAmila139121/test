#include <stdio.h>
#include <stdlib.h>

int main()
{

    char num[5];
    scanf("%s", num);

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '2' || num[i] == '3' || num[i] == '5' || num[i] == '6' || num[i] == '7' || num[i] == '8' || num[i] == '9')
            printf("*****");
        else if (num[i] == '1')
            printf("    *");
        else if (num[i] == '4')
            printf("*   *");
        printf(" ");
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '4' || num[i] == '8' || num[i] == '9')
            printf("*   *");
        else if (num[i] == '1' || num[i] == '2' || num[i] == '3' || num[i] == '7')
            printf("    *");
        else if (num[i] == '5' || num[i] == '6')
            printf("*    ");
        printf(" ");
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0')
            printf("*   *");
        else if (num[i] == '1' || num[i] == '7')
            printf("    *");
        else if (num[i] == '2' || num[i] == '3' || num[i] == '4' || num[i] == '5' || num[i] == '6' || num[i] == '8' || num[i] == '9')
            printf("*****");
        printf(" ");
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '6' || num[i] == '8')
            printf("*   *");
        else if (num[i] == '1' || num[i] == '3' || num[i] == '4' || num[i] == '5' || num[i] == '7' || num[i] == '9')
            printf("    *");
        else if (num[i] == '2')
            printf("*    ");
        printf(" ");
    }
    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == '0' || num[i] == '2' || num[i] == '3' || num[i] == '5' || num[i] == '6' || num[i] == '8')
            printf("*****");
        else if (num[i] == '1' || num[i] == '4' || num[i] == '7' || num[i] == '9')
            printf("    *");
        printf(" ");
    }
    printf("\n");
}