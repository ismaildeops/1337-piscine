#include<unistd.h>
int main(int ac, char **argv)
{
    int i = 0;
    int j = 1;
    while (j < ac)
    {
        int i = 0;
        while (argv[j][i])
        {
            int w = 0;
            int count = 0;
            while (w <= i)
            {
                if (argv[j][w] == argv[j][i])
                {
                    count++;
                }
                w++;
            }
            if (count == 1)
            {
                write(1, &argv[j][i],1);
            }   
            i++;
        }
        write(1,"\n",1);
        j++;
    }
}