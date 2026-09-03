/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:42:31 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/28 21:42:33 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<stdlib.h>
int *ft_range(int min, int max)
{
    int *range;
    range = malloc((max - min) * sizeof(int));

    int i = 0;
    while (i < max - min)
    {
        range[i] = min + i;
        i++;
    }
    return range;
}


int main()
{
    int min = 1;
    int max = 5;
    int i = 0;
    int *range;
    range = ft_range(min,max);
    while (i < max - min)
    {
        printf("%d", range[i]);
        i++;
    }
}
