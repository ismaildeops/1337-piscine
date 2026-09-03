#include <stdio.h>
int is_repeat(char *s)
{
    int i = 0;
    int j = 0;
    while (s[i])
    {
        j = i + 1;
        while (s[j])
        {
            if (s[i] == s[j])
            {
                return 0;
            }
            j++;
        }
        i++;
    }
    return 1;
}

int is_base_valid(char *base)
{
    int base_count = 0;
    if (base[0] == '\0')
    {
        return 0;
    }
    
    while (base[base_count])
    {
        if (base[base_count] == '-' || base[base_count] == '+' || 
            base[base_count] >= 9 && base[base_count] <= 13 || 
            base[base_count] == ' ')
        {
            return 0;
        }
        base_count++;
    }
    return 1;
}

int ft_atoi_base(char *str, char *base)
{
    int i = 0;   
    int result = 0;
    int base_len = 0;
    while (base[base_len])
    {
        base_len++;
    }
    if (is_base_valid(base) == 1 && is_repeat(base) == 1)
    {
        while (str[i])
        {  
            int j = 0;
            while (base[j])
            {
                if (str[i] == base[j])
                {
                    result = result * base_len + j;
                    break;
                }
                j++;
            }
        i++; 
        }
        return result;
    }
}


int main()
{
    char str[] = "BABA";
    char base[] = "0123456789ABCDEF";
    printf("%d", ft_atoi_base(str,base));
}