/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:20:49 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/26 10:20:52 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
    int i = 1;
    int result = nb;
    if (power < 0)
    {
        return 0;
    }
    if (power == 0)
    {
        return 1;
    }
    while (i < power)
    {
        result = result * nb;
        i++;
    }
    return result;
}
