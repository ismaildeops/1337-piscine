#include <stdio.h>
int main()
{
    int tab[] = {1, 2, 3, 4, 6, 8,123,2};
    int i = 0;
    int j;
    int swap;
    int size = (sizeof(tab) / sizeof(tab[6]));
    printf("%d", size);
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                swap = tab[i];
                tab[i] = tab[j];
                tab[j] = swap;
            }
            j++;
        }
        i++;
    }
    i = 0;
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }




}

#!/bin/sh

cat /etc/passwd | sed 's/#.*//' | sed -n '2~2p' | cut -d ':' -f 1 | rev | sort -r | sed -n "${FT_LINE1},${FT_LINE2}p" | paste -sd ', ' - | sed 's/$/./'