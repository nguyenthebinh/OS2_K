#include "readline.h"
int read_line(char *str)
{
    char c;
    int len;
    scanf("%c", &c);
    while (c != '\n' && c != 0)
    {
        str[len++] = c;
        scanf("%c", &c);
    }
    if (feof(stdin)) return -1;
    return len;
}
