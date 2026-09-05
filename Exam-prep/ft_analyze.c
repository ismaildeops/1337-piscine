// "Hello 1337"
// length: 10 >>
// letters: 5 >>
// Digits: 4 >>
// Spaces: 1 >>
// Vowels: 2
// First: H >>
// Last: 7 >>
// Reverse: 7331 olleH
#include<stdio.h>
int ft_strlen(char *s)
{
    int i = 0;
    while(s[i])
        i++;
    return i;
}

int count_letters(char *s)
{
    int i = 0;
    int letter = 0;
    while(s[i])
    {
        if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
        {
            while(s[i] >= 'a' && s[i] <= 'z' || s[i] >= 'A' && s[i] <= 'Z')
            {    
                letter++;
                i++;
            }
        }
        i++;
    }
    return letter;
}

int count_Digits(char *s)
{
    int i = 0;
    int digit = 0;
    while(s[i])
    {
        if(s[i] >= '0' && s[i] <= '9')
        {
            while(s[i] >= '0' && s[i] <= '9')
            {    
                digit++;
                i++;
            }
        }
        i++;
    }
    return digit;
}

int count_spaces(char *s)
{
    int i = 0;
    int space = 0;
    while(s[i])
    {
        if(s[i] >= 9 && s[i] <= 13 || s[i] == ' ')
        {
            while(s[i] >= 9 && s[i] <= 13 || s[i] == ' ')
            {    
                space++;
                i++;
            }
        }
        i++;
    }
    return space;
}

char first(char *str)
{
    return str[0];
}
char last(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    int last_char = i - 1;
    return str[last_char];
}

int main()
{
    char str[] = "Hello 1337";
    printf("%c\n", last(str));
}