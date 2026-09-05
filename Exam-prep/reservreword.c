#include<unistd.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int main()
{
    char str[] = {"Hello AaHMEDd world"};
    int i = 0;
    int start = 0;
    while (str[i])
    {
        if (!is_space(str[i]))
        {
            if (is_space(str[i - 1]) || !((i - 1)  >0))
            {
                //str[i] --> start
                int start = i;
                while (!is_space(str[i]) && str[i])
                {
                    i++;
                }
                int end = i;
                while (start <= end)
                {
                    write(1,&str[end],1);
                    end--;
                }
            }
        }
        if (is_space(str[i]))
        {
            write(1,&str[i],1);
        }
        i++;
    }
}

//Hello AaHMEDd
//olleH dDEMHaA