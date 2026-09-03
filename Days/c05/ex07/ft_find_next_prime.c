/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:13:10 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/28 21:21:45 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_find_next_prime(int nb)
{
    int n;
    n = 2;
    int C = nb + 1;
    while (n != nb )
    {
        if (C % n == 0)
        {
            C++;
        }
        n++;
    }
    return C;
}


int main()
{
    printf("%d", ft_find_next_prime(5));
}
