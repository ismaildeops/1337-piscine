#include<unistd.h>
void rot_13(char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            while (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = (str[i] - 'a' + 13) % 26 + 'a';
                write(1,&str[i],1);
                i++;
            }
        }
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            while (str[i] >= 'A' && str[i] <= 'Z')
            {
                str[i] = (str[i] - 'A' + 13) % 26 + 'A';
                write(1,&str[i],1);
                i++;
            }
        }
        i++;
    }
}

int main()
{
    char str[] = {"abn"};
    rot_13(str);
}