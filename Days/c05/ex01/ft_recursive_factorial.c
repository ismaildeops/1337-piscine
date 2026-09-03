/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/26 10:07:52 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/26 10:07:55 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_recursive_factorial(int nb)
{
    if (nb < 0)
    {
        return 0;
    }
    if (nb == 0)
    {
        return 1;
    }
    return (nb * ft_recursive_factorial(nb - 1));  
}
