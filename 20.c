#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *getword(char *line, char *word)
{

    char *ptr = line;
    char *qtr = word;

    word[0] = '\0';

    while (*ptr && isspace(*ptr))
    {
        ptr++;
    }
    while (*ptr && !isspace(*ptr))
    {
        *qtr++ = *ptr++;
    }
    *qtr = '\0';

    if (word[0] == '\0')
    {
        return NULL;
    }
    else
    {
        return ptr;
    }
}

int main()
{
    char input[100];
    int t[5];
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        fgets(input, 100, stdin);
        char *ptr = input;
        char word[5];
        ptr = getword(ptr, word);
        char o[5];
        strcpy(o, word);
        int j = 0;
        while ((ptr = getword(ptr, word)))
        {
            t[j] = atoi(word);
            j++;
        }
        if (o[0] == '+')
        {
            int a = t[0] + t[2];
            int b = t[1] + t[3];
            printf("%d %d\n", a, b);
        }
        else if (o[0] == '-')
        {
            int a = t[0] - t[2];
            int b = t[1] - t[3];
            printf("%d %d\n", a, b);
        }

        else if (o[0] == '*')
        {
            int a = t[0] * t[2] - t[1] * t[3];
            int b = t[0] * t[3] + t[2] * t[1];
            printf("%d %d\n", a, b);
        }
        else if (o[0] == '/')
        {
            int a = (t[0] * t[2] + t[3] * t[1]) / (t[2] * t[2] + t[3] * t[3]);
            int b = -1 * (t[0] * t[3] + t[2] * t[1]) / (t[2] * t[2] + t[3] * t[3]);
            printf("%d %d\n", a, b);
        }
    }
}