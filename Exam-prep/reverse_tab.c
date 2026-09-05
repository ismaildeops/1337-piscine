#include <stdio.h>
int main()
{
    int tab[] = {1, 3, 4, 5, 9, 7};
    int size = (sizeof(tab) / sizeof(tab[0]));

    int i = 0;
    int swap;
    int index = size - 1;
    while (i < index)
    {
        swap = tab[index];
        tab[index] = tab[i];
        tab[i] = swap;
        i++;
        index--;
    }
    i = 0;
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
}