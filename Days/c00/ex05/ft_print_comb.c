/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/12 06:28:17 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/22 13:41:35 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_puchar(char c)
{
	write(1 , &c , 1);
}

void	ft_print_comb(void)
{
	char i , j , k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_puchar(i); // i = 0
				ft_puchar(j); // j = 1
				ft_puchar(k); // k = 2
				if (!(i == '7' && j == '8' && k == '9'))
				{
					write(1,",",1);
				}
				
				k++;
			}
			j++;
		}
		i++;
	}
	
}

int main(void)
{
	ft_print_comb();
}
