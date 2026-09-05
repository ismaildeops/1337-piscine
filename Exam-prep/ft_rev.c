#include <unistd.h>

void	ft_rev(char *str)
{
	int		len;
	int		index;
	int		i;
	char	tmp;

	len = 0;
	while (str[len])
		len++;

	index = len - 1;
	i = 0;
	while (i < index)
	{
		tmp = str[index];
		str[index] = str[i];
		str[i] = tmp;
		i++;
		index--;
	}
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "1337exam";

	ft_rev(str);
}