#include<unistd.h>
void ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1,&str[i],1);
        i++;
    }
}

int main()
{
    char str[] = {"Hello"};
    ft_strlen(str);
}