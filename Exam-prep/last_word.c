#include<unistd.h>
int main(int ac, char **argv)
{
    if (ac != 2)
    {
        write(1,"\n",1);
        return 0;
    }
    
    int str_len = 0;
    while (argv[1][str_len])
        str_len++;
    if ((argv[1][str_len - 1] >= 9 && argv[1][str_len - 1] <= 13)
         || (argv[1][str_len - 1] == ' '))
    {
        while ((argv[1][str_len - 1] >= 9 && argv[1][str_len - 1] <= 13)
            ||(argv[1][str_len - 1] == ' '))
        {
            str_len--;
        }
    }
    str_len--;
    while (!((argv[1][str_len] >= 9 && argv[1][str_len] <= 13))
        || (argv[1][str_len] == ' '))
    {
        str_len--;
    }
    str_len++;
    while (!((argv[1][str_len] >= 9 && argv[1][str_len] <= 13))
        || ((argv[1][str_len] == ' ') && argv[1][str_len]))
    {
        write(1,&argv[1][str_len],1);
        str_len++;
    }  
}
