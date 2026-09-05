#include<unistd.h>
void ft_putstr(char *s)
{
    int i = 0;
    while (s[i])
    {
        write(1,&s[i],1);
        i++;
    }   
}
int ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s1[i] == s2[i])
        i++;
    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
int main(int ac, char **av)
{
    int i;
    int j;
    char *tmp;
    i = 1;
    while (i < ac)
    {
        j = i + 1;
        while (j < ac)
        {
            if (ft_strcmp(av[i],av[j]) > 0)
            {
                tmp = av[i];
                av[i] = av[j];
                av[j] = tmp;
            }
            j++;
        }
        i++;
    }
    i = 1;
    while (i < ac)
    {
        ft_putstr(av[i]);
        write(1,"\n",1);
        i++;
    }
}