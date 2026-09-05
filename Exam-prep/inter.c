#include<unistd.h>
int main(int ac, char **argv)
{
    if (ac == 3)
    {
        int i;
        int j;
        i = 0;
        while (argv[1][i])
        {
            int count = 0;
            int w = 0;
            while (w < i)
            {
                if (argv[1][w] == argv[1][i])
                {
                    count++;
                }
                w++;
            }
            if (count == 0)
            {
                j = 0;
                while (argv[2][j])
                {
                    if (argv[1][i] == argv[2][j])
                    {
                        write(1,&argv[2][j],1);
                        break;
                    }
                    j++;
                }
            }
            i++;    
        }
    }
     
}