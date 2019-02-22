// readline.h
#ifndef READ_LINE_H
#define READ_LINE_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define BUFLEN 256
int read_line(char *str);
int readline(FILE *fp, char *buffer, int address);
//char* readline(FILE *fp, char *buffer, int buff_len);

#endif
