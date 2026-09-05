#include<unistd.h>
void alpha_mirror(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            while (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = 'z' - (str[i] - 'a');
                write(1,&str[i],1);
                i++;
            }
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            while (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = 'Z' - (str[i] - 'A');
                write(1,&str[i],1);
                i++;
            }
        }
        else if(!(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z'))
        {
            write(1,&str[i],1);
        }
        i++;
    }
    
}

int main()
{
    char str[] = {"abc     XYZ   abc   "};
    alpha_mirror(str);
}