//ft_range(1,5) --> 1234
#include<stdio.h>
#include<stdlib.h>
int *ft_range(int min, int max)
{
    int *range;
    range = malloc((max - min) * sizeof(int));

    int i = 0;
    while (i < max - min)
    {
        range[i] = min + i;
        i++;
    }
    return range;
}


int main()
{
    int min = 1;
    int max = 5;
    int i = 0;
    int *range;
    range = ft_range(min,max);
    while (i < max - min)
    {
        printf("%d", range[i]);
        i++;
    }
}