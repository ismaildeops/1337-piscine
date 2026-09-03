/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 09:58:43 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/26 09:58:56 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_factorial(int nb)
{
    int     i;
    i = nb - 1;
    int     result;
    result = nb;
    if (nb < 0)
    {
        return 0;
    }
    if (nb == 0)
    {
        return 1;
    }
    while (i != 0)
    {
        result = result * i;
        i--;
    }
    return result ;
}
