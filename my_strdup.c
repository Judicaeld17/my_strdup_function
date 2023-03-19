// Let's allocate a string (or array of characters).

// We have the string: "abc" and we want a copy in a new part of memory that you will have to malloc.

// (Reproduce the behavior of strdup from man strdup)
#include<string.h>
#include<stdlib.h>
char* my_strdup(char* str){
   int len = strlen(str);
char* str_dup=(char*)malloc(len*sizeof(char));
str_dup=str;
return str_dup;
}