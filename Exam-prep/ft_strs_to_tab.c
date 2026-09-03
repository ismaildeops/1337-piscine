#include "stock_str.h"
#include <stdlib.h>

struct s_stock_str *ft_str_to_tab(int ac, char **av)
{
    struct s_stock_str *tab;
    tab = malloc(sizeof(struct s_stock_str) * (ac + 1));
    if (!tab)
        return (NULL);
    int i = 0;
    while (i < ac)
    {
        int len = 0;
        while (av[i][len])
        {
            len++;
        }
        tab[i].size = len;
        tab[i].str = av[i];
        tab[i].copy = malloc(sizeof(char) * (len + 1));
        if (!tab[i].copy)
            return (NULL);
        int j = 0;
        while (tab[i].str[j])
        {
            tab[i].copy[j] = av[i][j];
            j++;
        }
        tab[i].copy[j] = '\0';
        i++;
    }
    tab[ac].size = 0;
    tab[ac].str = 0;
    tab[ac].copy = 0;

    return tab;
}