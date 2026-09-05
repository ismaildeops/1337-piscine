#include<unistd.h>
int main(int ac, char **argv)
{
    int i = 0;
    if (argv[1][i] >= 9 && argv[1][i] <= 13 || argv[1][i] == ' ')
    {
        while (argv[1][i] >= 9 && argv[1][i] <= 13 || argv[1][i] == ' ')
        {
            i++;
        } 
    }
    while (!(argv[1][i] >= 9 && argv[1][i] <= 13 || argv[1][i] == ' '))
    {
        write(1,&argv[1][i],1);
        i++;
    } 
}
