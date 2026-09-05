#include<unistd.h>
void ft_putchar(char c, int nb)
{
    int i = 0;
    while (i <= nb)
    {
        write(1, &c,1);
        i++;
    }
}

void repeat_alpha(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            while (str[i] >= 'a' && str[i] <= 'z')
            {
                int nb = str[i] - 'a';
                ft_putchar(str[i], nb);
                i++;
            }
            
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            while (str[i] >= 'A' && str[i] <= 'Z')
            {
                int nb = str[i] - 'A';
                ft_putchar(str[i], nb);
                i++;
            }
            
        }
    }
}

int main()
{
    char str[] = {"ABC"};
    repeat_alpha(str);
}