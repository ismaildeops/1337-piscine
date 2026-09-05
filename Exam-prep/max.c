#include<stdio.h>
int ft_max(int *tab, int len)
{
    int max = tab[0];
    int i = 1;
    while (i < len)
    {
        if (tab[i] > max)
        {
            max = tab[i];
        }
        i++;
    }
    return max;
}

int main()
{
    int tab[] = {1,10,3,4,5,6};
    printf("%d", ft_max(tab , 6));
}