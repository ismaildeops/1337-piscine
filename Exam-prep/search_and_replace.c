#include<unistd.h>
int main(int ac , char **argv)
{
    if (ac == 4)
    {
        int i = 0;
        while (argv[1][i])
        {
            if (argv[1][i] == argv[2][0])
            {
                argv[1][i] = argv[3][0];
            }
            i++;
        }
        i = 0;
        while (argv[1][i])
        {
           write(1,&argv[1][i],1);
           i++;
        }
    }
    else
    {
        return 0;
    }
}

//./a.out "hello world" o a
// hella warld