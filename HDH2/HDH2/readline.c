#include "readline.h"
//int readline(FILE *fp, char *buffer, int address)
char* readline(FILE *fp, char *buffer, int buff_len)
{
    int ch;
    int i = 0;
    
    buffer = malloc(buff_len + 1);
    //if (address == 0) buffer = malloc(buff_len + 1);
    //else buffer = realloc(buffer, address + 1);
    if (!buffer) return NULL;  // Out of memory
    
    while ((ch = fgetc(fp)) != '\n' && ch != EOF)
    {
        buff_len++;
        //void *tmp = realloc(buffer, address + buff_len + 1);
        void *tmp = realloc(buffer, buff_len + 1);

        if (tmp == NULL)
        {
            free(buffer);
            return NULL; // Out of memory
        }
        buffer = tmp;
        
        buffer[i] = (char) ch;
        //buffer[address + i] = (char) ch;

        i++;
    }
    buffer[i] = '\0';
    
    // Detect end
    
    if (ch == EOF && (i == 0 || ferror(fp)))
    {
        free(buffer);
        return NULL;
    }
    //address+=buff_len;
    return buffer;
}
int read_line(char *str)
{
    FILE* fp;
    int buff_len = 0;
    //int address = 0;
    fp = fopen("/Users/khuong/Documents/HDH2/HDH2/input.txt","r");
    //return readline(fp, str, &address);
    str = readline(fp,str,&buff_len);
    return buff_len;
}
