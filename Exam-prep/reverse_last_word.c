#include<unistd.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int main()
{
    char str[] = {"Hello world How are moad"};

    int i = 0;
    int str_len = 0;
    while (str[str_len])
    {
        str_len++;
    }
    int j = str_len - 1;

    while (str[i])
    {
        if (i == j)
        {
            while (!is_space(str[j]))
            {
                j--;
            } 
        }
        i++;
    }
    j++;
    i = 0;
    while (str[i] && i != j)
    {
        write(1,&str[i],1);
        i++;
    }
    int k = str_len - 1;
    while (k > 0 && !is_space(str[k]))
    {
        write(1,&str[k],1);
        k--;
    }
    write(1,"\n",1);
}