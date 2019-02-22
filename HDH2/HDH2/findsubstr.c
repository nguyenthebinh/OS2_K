#include "findsubstr.h"
int find_sub_string(const char *str , const char *sub)
{
    int M = strlen(str);
    int N = strlen(sub);
    
    for (int i = 0; i <= N - M; i++) {
        int j;
        
        for (j = 0; j < M; j++)
            if (sub[i + j] != str[j])
                break;
        
        if (j == M)
            return i;
    }
    
    return -1;
}
