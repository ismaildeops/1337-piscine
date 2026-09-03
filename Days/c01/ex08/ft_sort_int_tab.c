/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/15 10:42:05 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/15 18:35:11 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
	
}
void	ft_sort_int_tab(int *tab, int size)
{
	int i , j , swap;
	i = 0;
	int k = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				swap = tab[j];
				tab[j] = tab[i];
				tab[i] = swap;
			}
			j++;
		}
		i++;
	}
	while (k < size)
	{
		ft_putnbr(tab[k]);
		k++;
	}
}


int main()
{
	int T[] = {2 , 5 , 4 ,7 , 9 , 98 , -1 , 6 , 4};
	
	
	int size = 9;
	ft_sort_int_tab(T, size);
	
}

