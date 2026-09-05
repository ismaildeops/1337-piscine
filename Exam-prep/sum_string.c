#include<stdio.h>
int main()
{
    char str[] = {"Hell8o wo9ld"};
    int i;
    i = 0;
    int result = 0;
    while (str[i])
    {
        if (str[i] >= '0' && str[i] <= '9')
            result = result + str[i] - '0';
        i++;
    }
    printf("%d", result);
}