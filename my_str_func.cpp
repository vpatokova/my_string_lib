#include "my_str_func.h"

int my_puts(const char *s)
{
    if (s == NULL)
        return EOF;

    for (int i = 0; s[i] != '\0'; i++)
        putchar(s[i]);

    printf("\n");

    return 1;
}

int my_strlen(char *s)
{
    char *s_curr = s; 
    
    while (*s_curr != '\0')
        continue;

    return s_curr - s;
}

char* my_strcpy(char *dest, const char *src)
{
    int i = 0;

    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = src[i];

    return dest;
}

char* my_strncpy(char *dest, const char *src, int count)
{
    int i = 0;
    
    for (i = 0; i < count && src[i] != '\0'; i++)
        dest[i] = src[i];

    if (i < count)
        dest[i] = src[i];

    return dest;
}

char* my_strchr(char *str, char ch)
{
    int i = 0;

    for (i = 0; str[i] != '\0'; i++)
        if (str[i] == ch)
            return str + i;

    if (ch == '\0')
        return str + i;

    return nullptr;
}

int my_strcmp(const char *s, const char *t)
{
    for (int i = 0; s[i] != '\0' && t[i] != '\0'; i++)
        if (s[i] == t[i])
            continue;

    return *s - *t;
    
}

char* my_strcat(char *dest, const char *src)
{
    int i = 0;
    int j = 0;

    for (j = 0; dest[j] != '\0'; j++)
        continue;

    for (i = 0; src[i] != '\0'; i++, j++)
        dest[j] = src[i];

    dest[j] = src[i];

    return dest;
}

char* my_strncat(char *dest, const char *src, int count)
{
    int i = 0;
    int j = 0;

    for (j = 0; dest[j] != '\0'; j++)
        continue;

    for (i = 0; src[i] != '\0' && i < count; i++, j++)
        dest[j] = src[i];

    if (i < count)
        dest[j] = src[i];
    
    dest[j] = src[i];

    return dest;
}

char* my_fgets(char *str , int count, FILE *stream)
{
    int i = 0;
    
    for (i = 0; i < count - 1; i++)
        if (feof(stream))
        {
            if (i == 0)
                return nullptr; 
            return str;
        }

        char ch = getc(stream);
        if (ch == '\n')
        {
            str[i] = ch;
            return str;
        }
        str[i] = ch;

    str[i] = '\0';

    return str;

}

int my_getline(char **lineptr, int n, FILE *stream)
{
    char *buf = (char *) calloc(n + 2, sizeof(char));
    *lineptr = buf;

    int i = 0;

    if (n == 0)
    {
        buf[i] = '\0';
        return n;
    }

    char ch = getc(stream);

    for(i = 0; i < n && ch !='\n'; i++)
    {
        buf[i] = ch;
        ch = getc(stream);
    } 

    if (i < n)
    {
        buf[i] = ch;
        buf[i + 1] = '\0';
        return i + 1;
    } 
    else // if (i >= n)
    {
        buf[i] = '\0';
        return n;
    }  
}

char* my_strdup(char *src)
{
    char *dest = (char *) calloc(my_strlen(src) + 1, sizeof(char));

    int i = 0;
    
    for (i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];

    dest[i] = src[i];

    return dest;
}