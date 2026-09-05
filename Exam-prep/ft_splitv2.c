#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int is_sep(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return (1);
        i++;
    }
    return (0);
}

int count_words(char *str, char *charset)
{
    int i;
    int count;

    i = 0;
    count = 0;
    while (str[i])
    {
        if (!is_sep(str[i], charset) && (i == 0 || is_sep(str[i - 1], charset)))
            count++;
        i++;
    }
    return (count);
}

