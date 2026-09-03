#include <stdlib.h>
#include <stdio.h>

int is_charset(char c, char *charset)
{
    int i = 0;
    while (charset[i])
    {
        if (c == charset[i])
            return 1;
        i++;   
    }
    return 0;
}

int count_words(char *str, char *charset)
{
    int i = 0;
    int count = 0;
    if (!is_charset(str[0], charset))
    {
        count++;        
    }
    while (str[i])
    {
        if (is_charset(str[i], charset))
        {
            
            if (!is_charset(str[i + 1], charset) && str[i + 1] != '\0')
            {
                count++;
            }
        }
        i++;
    }
    return count;
}

char **ft_split(char *str, char *charset)
{
    char **words;
    int start = 0;
    int end = 0;
    int j = 0;
    int k;
    words = malloc(sizeof(char *) * (count_words(str,charset) + 1));
    if (!words)
        return NULL;
    int i = 0;
    while (str[i])
    {
        while(is_charset(str[i],charset) && str[i])
            i++;
        start = i;
        while (!is_charset(str[i],charset) && str[i])
            i++;
        end = i;
        words[j] = malloc(sizeof(char) * ((end - start) + 1));
        if (!words[j])
            return NULL;
        k = 0;
        while (k < end - start)
        {
            words[j][k] = str[start + k];
            k++;
        }
        words[j][k] = '\0';
        j++;
    }
    words[j] = 0;
    return words;
}
int main()
{
    char charset[] = ",";
    char str[] = "Hello,world";
    char **words;
    words = ft_split(str,charset);
    int i = 0;
    printf("%s", words[i]);
}