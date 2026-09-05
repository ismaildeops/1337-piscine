#include<unistd.h>
void unique_chars(char *str)
{
    int i;
 
    i = 0;
    int j = 0;
    while (str[i])
    {
        j = 0;
        int count = 0;
        while (str[j])
        {
            if (str[i] == str[j])
            {
                count++; 
            }
            j++;
        }
        if (count == 1)
        {
            write(1,&str[i],1);
        }
        i++;
    }
}

int main()
{
    char str[] = {"aabccd"};//he
    unique_chars(str);
}