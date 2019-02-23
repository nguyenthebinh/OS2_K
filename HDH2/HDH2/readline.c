#include "readline.h"
int read_line(char *str)
{
    char c;
    scanf("%c", &c);
    int len = 0;
    while (c != '\n' && !feof(stdin))
    {
        str[len++] = c;
        scanf("%c", &c);
    }
    str[len] = 0;
    if (feof(stdin)) return -1;
    return len;
}
