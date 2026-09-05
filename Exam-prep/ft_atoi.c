#include <stdio.h>
int  ft_atoi(char *str)
{
    int i = 0;
    int sign = 1;
    int result = 0;
    while (*str)
    {
        if (*str >= 9 && *str <= 13 || *str == ' ')
        {
            while (*str >= 9 && *str <= 13 || *str == ' ')
            {
                str++;
            }
        }
        if (*str == '-' || *str == '+')
        {
            if (*str == '-')
            {
                sign = -1;
            }
            str++;   
        }
        while (*str >= '0' && *str <= '9')
        {
            result = (result * 10) + *str - '0';
            str++;
        }
        if (!(*str >= '0' && *str <= '9'))
        {
            break;
        }
        str++;
    }
    return (result * sign);
}

int main()
{
    char str[] = {"   -1324ff444444444444444444444444444"};
    printf("%d", ft_atoi(str));
}