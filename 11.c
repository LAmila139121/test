#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int alphaCnt[26] = {0};
    char c;
    int idx;
    int word = 0;
    while (scanf("%c", &c))
    {
        if (c == '\n')
            break;
        if (isspace(c))
            word++;
        if (isupper(c))
        {
            idx = c - 'A';
            alphaCnt[idx]++;
        }
        else
        {
            idx = c - 'a';
            alphaCnt[idx]++;
        }
    }
    word++;
    printf("%d\n", word);
    for (int i = 0; i < 26; i++)
    {
        if (alphaCnt[i] != 0)
            printf("%c : %d\n", 'a' + i, alphaCnt[i]);
    }
}
