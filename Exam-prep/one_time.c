#include<stdio.h>
int main()
{
    int tab[] = {1,1, 2, 2 , 3, 4,4, 5, 8,8,8};
    int size = (sizeof(tab) / sizeof(tab[0]));
    int i = 0;
    int swap[10];
    int count = 0;
    int j;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] == tab[j])
            {
                count++;
            }
            j++;
        }
        if (count == 1)
        {
            swap[count] = tab[i];
            count++;
        }
        i++;
    }
    
    int swap_size = (sizeof(swap) / sizeof(swap[0]));
    i = 0;
    while (i < swap_size)
    {
        printf("%d", swap[i]);
        i++;
    }
}














