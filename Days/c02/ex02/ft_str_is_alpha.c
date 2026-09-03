/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 13:01:58 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 15:51:28 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int ft_str_is_alpha(char *str)
{
    int i = 0;
    int j = 0;
    while (str[j] != '\0')
    {
        j++;
    }
    while ('a' <= str[i] && str[i] <= 'z' || 'A' <= str[i] && str[i] <= 'Z')
    {
        i++;
    }
    if (i == j)
    {
        return 1;
    }
    else
        return 0;
    
}