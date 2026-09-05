#include<unistd.h>

int	is_space(char c)
{
	return (c == ' ' || (c >= 9 && c <= 13));
}

int main()
{
    char str[] = {"Hello AaHMEDd aaaaa  bbbbb eerrrt"};
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
      
        i++;
    }
    i = 0;
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
                    int count = 0;
                    while (start < i)
                    {
                        if (str[start] == str[i])
                        {
                            count++;
                        }
                        start++;
                    }
                    if (count == 0)
                    {
                        write(1,&str[i],1);
                    }
                    i++;
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

//Hello Hello Hello
//helo helo helo