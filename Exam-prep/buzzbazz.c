#include<unistd.h>
void put_char(char c)
{
    write(1,&c,1);
}
int main()
{
    int a = 0;
    while(a <= 9)
    {
        if(a % 5 == 0 && a % 3 != 0)
        {
            write(1,"buzz",4);
            write(1,"\n",1);
        }
        else if(a % 3 == 0 && a % 5 != 0)
        {
            write(1,"bazz",4);
            write(1,"\n",1);
        }
        else if(a % 5 == 0 && a % 3 == 0)
        {
            write(1,"buzzbazz",8);
            write(1,"\n",1);
        }
        else
        {
            put_char(a + '0');
            write(1,"\n",1);
        }
        a++;
    }
    
    int b = 10;
    while(b <= 99)
    {
        if(b % 5 == 0 && b % 3 == 0)
        {
            write(1,"buzzbazz",8);
            write(1,"\n",1);
        }
        else if(b % 5 == 0 && b % 3 != 0)
        {
            write(1,"buzz",4);
            write(1,"\n",1);
        }
        else if(b % 3 == 0 && b % 5 != 0)
        {
            write(1,"bazz",4);
            write(1,"\n",1);
        }
        else   
        {
            put_char((b / 10) + '0');
            put_char((b % 10) + '0');
            write(1,"\n",1);
        }
        b++;
    }
    write(1,"buzz",4);
}
