#include<unistd.h>
#include<stdio.h>
int is_repeat()
{
    char s[] = {"qwertyuioplkjhgfdsaa"};

    int i = 0;
    int j = 0;
    while (s[i])
    {
        j = i + 1;
        while (s[j])
        {
            if (s[i] == s[j])
            {
                return 1;
            }
            j++;
        }
        i++;
    }
    return 0;
}
int main()
{
    printf("%d", is_repeat());
    
    
}