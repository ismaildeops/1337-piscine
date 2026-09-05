#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
int count_digits(int nbr)
{
    int count = 0;
    if (nbr == 0)
    {
        return 1;
    }
    if (nbr < 0)
    {
        nbr = -nbr;
    }
    
    while (nbr != 0)
    {
        nbr = nbr / 10;
        count++;
    }
    return count;
}
char *ft_itoi(int nbr)
{
    char *str;
    if (nbr < 0)
        str = malloc((count_digits(nbr) + 2) * sizeof(char));
    if (nbr >= 0)
        str = malloc((count_digits(nbr) + 1) * sizeof(char));
    if (str == NULL)
        return NULL;
    
    int index = count_digits(nbr) - 1;
    int len = count_digits(nbr);
    int neg = count_digits(nbr);
    if (nbr < 0)
    {
        nbr = -nbr;
        str[count_digits(nbr) + 1] = '\0';
        while (neg >= 1)
        {
            str[neg] = (nbr % 10) + '0';
            nbr = nbr / 10;
            neg--; 
        }
        nbr = -nbr; 
        str[0] = '-'; 
    }
    if (nbr >= 0)
    {
        str[len] = '\0';
        while (index >= 0)
        {
           str[index] = (nbr % 10) + '0';
           nbr = nbr / 10;
           index--;
        }
    }
    return str;
}


int main()
{
    char *str;
    str = ft_itoi(-123465);
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }   
}