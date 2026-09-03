/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/13 11:20:35 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/22 12:08:59 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_print_comb2()
{
    int a , b;
    a = 0;
    while (a <= 98)
    {
        b = a + 1;
        while (b <= 99)
        {
            ft_putchar((a / 10) + '0');
            ft_putchar((a % 10) + '0');
            write(1, " ", 1);
            ft_putchar((b / 10) + '0');
            ft_putchar((b % 10) + '0');
            if (!(a == 98 && b == 99))
            {
                write(1, ", ", 2);
            }
            b++;
        }
        a++;
    }
    
}
int main()
{
    ft_print_comb2();
}
