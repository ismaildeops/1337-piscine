#include <unistd.h>
int is_repeat(char *s)
{
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

void putnumber(unsigned int nbr, unsigned int base_len, char *base)
{
	if (nbr >= base_len)
		putnumber(nbr / base_len, base_len, base);

	write(1, &base[nbr % base_len], 1);
}
void ft_putnbr_base(int nbr, char *base)
{
	unsigned int base_len;
	base_len = 0;
	unsigned int number;
	while (base[base_len])
	{
		if (base[base_len] == '-' || base[base_len] == '+')
			return;
		base_len++;		
	}

    if (base_len >= 2 && is_repeat(base) == 0)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			number = -(unsigned int)nbr;
		}
		else
		{
			number = (unsigned int)nbr;
		}
		putnumber(number,base_len,base);
	}
}
int main()
{
	ft_putnbr_base(10, "AB");
}


