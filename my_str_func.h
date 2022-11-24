#ifndef MY_STR_FUNC_H
#define MY_STR_FUNC_H

#include <stdio.h>

int my_puts(const char *s);

int my_strlen(char *s);

char* my_strcpy(char *dest, const char *src);

char* my_strncpy(char *dest, const char *src, int count);

char* my_strchr(char *str, char ch);

int my_strcmp(const char *s, const char *t);

char* my_strcat(char *dest, const char *src);

char* my_strncat(char *dest, const char *src, int count);

char* my_fgets(char *str, int count, FILE *stream);

int my_getline(char s[], int lim);

char *my_strdup(char *s);

#endif // !MY_STR_FUNC_H