//is_repeat nust return 0
//is_valid
//if s[i] == bas[i] . result = result + base_len + j
//No '+' or '-'  && Base length must be ≥ 2 && No whitespace 
#include<stdio.h>
int is_space_min_plus(char c)
{
	return ((c >= 9 && c <= 13) || c == ' ' || c == '-' || c == '+');
} 
int is_repeat(char *s)
{
    int j;
    int i = 0;
    while(s[i])
    {
        j = i + 1;
        while(s[j])
        {
            if(s[i] == s[j])
            {
                return 1;
                break;
            }
            j++;
        }
        i++;
    }
    return 0;
}
int is_valid(char *s)
{   
    int i = 0;
    while(s[i])
    {
        i++;
    }
    if(i < 2)
        return -1;
    i = 0;
    while(s[i])
    {
        if(is_space_min_plus(s[i]))
            return 1;
        i++;
    }
    return 0;
}
int ft_atoi_base(char *str, char *base)
{
    int base_len = 0;
    int i = 0;
    int j;
    int result = 0;
    if(is_repeat(base) == 0 && is_valid(base) == 0)
    {
        while(base[base_len])
        {
            base_len++;
        }
        while(str[i])
        {
            j = 0;
            while(base[j])
            {
                if(str[i] == base[j])
                    result = result * base_len + j;
            j++;
            }
            i++;
        }
    }
    
    return result;
}


int main()
{
    printf("%d", ft_atoi_base("2A", "0123456789ABCDEF"));
}