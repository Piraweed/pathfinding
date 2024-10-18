#ifndef LIBRARY_H
#define LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum{
    FILE_NOT_FOUND = 1,
    NO_START_NODE = 2,
    NO_END_NODE = 3,
    NO_VALIDE_PATH = 4,
    BAD_FILE_FORMAT = 5
} Error;

typedef struct n{
    int id;
    struct n **links;
} Node;

int main(int argc, char* argv[]);

int str_in_str(char* str1, char* str2);
int display_nods_nbr(FILE *file);

#endif