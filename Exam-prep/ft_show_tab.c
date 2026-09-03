#include<unistd.h>
#include "stock_str.h"
void putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

void putnbr(int nb)
{
    if (nb == -2147483648)
    {
        write(1,"-2147483648",11);
        return;
    }
    if (nb < 0)
    {
        write(1,"-",1);
        nb = -nb;
    }
    if (nb >= 10)
        putnbr(nb / 10);
    char c;
    c = nb % 10 + '0';
    write(1,&c,1);
}

void ft_show_tab(struct s_stock_str *par)
{
    int i = 0;
    while (par[i].str)
    {
        putstr(par[i].str);
        write(1,"\n",1);
        putnbr(par[i].size);
        write(1,"\n",1);
        putstr(par[i].copy);
        write(1,"\n",1);
        i++;
    }
}



// struct s_stock_str
// {
//     int size;
//     char *str;
//     char *copy;
// };
// struct s_stock_str *par;
// par[i].size
// par[i].str
// par[i].copy