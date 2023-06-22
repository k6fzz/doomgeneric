#ifndef FZZ_STDIO_H
#define FZZ_STDIO_H

#include <errno.h>

#define SEEK_SET 1
#define SEEK_CUR 2
#define SEEK_END 4

typedef struct file_base FILE;

extern FILE* stderr;
extern FILE* stdin;
extern FILE* stdout;




#endif