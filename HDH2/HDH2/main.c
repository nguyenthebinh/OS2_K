// main . c
#include <stdio.h>
#include "readline.h"
#include "findsubstr.h"
int main(int argc,char *argv[])
{
    char s1[] =  "hand";
    char s2[] = "khuonghandsome";
    char* str ;
    int check = find_sub_string(s1, s2);
    if (check == -1)
        printf( "Not present");
    else
        printf( "Present at index %d \n", check);
    int i =read_line(str);
    printf("%d %s",i ,str);
    return 0;
}
