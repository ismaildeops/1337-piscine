#include<stdio.h>
int main()
{
    int tab[] = {1,1, 2, 2 , 3, 4,4, 5, 8,8,8};
    int size = (sizeof(tab) / sizeof(tab[0]));
    int i = 0;
    int swap;
    while (i < size)
    {
        int w = 0;
        int count = 0;
        while (w < i)
        {
            if (tab[w] == tab[i])
            {
                count++;
            }
            w++;
        }
        if (count != 0)
        {
            int j = i;
            swap = tab[j];
            size--;
            while (j < size)
            {
                tab[j] = tab[j + 1];
                j++;
            }
        }
        else
            i++;
    }
    i = 0;
    while (i < size)
    {
        printf("%d ", tab[i]);
        i++;
    }
}