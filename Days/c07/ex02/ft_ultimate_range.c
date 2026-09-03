#include<stdio.h>
#include<stdlib.h>
int ft_ultimate_range(int **range, int min, int max)
{
    *range = malloc(((max - min) ) * sizeof(int));
    if(!*range)
        return (-1);
    int i = 0;
    while (i < max - min)
    {
        (*range)[i] = min + i;
        i++;
    }
    return (0);
}

int main()
{
    int *range;
    int min;
    int max;
    ft_ultimate_range(&range,min,max);
    int i = 0;
    
    int size = (max - min);
    while(i < size)
    {
        printf("%d", range[i]);
        i++;
    }
}