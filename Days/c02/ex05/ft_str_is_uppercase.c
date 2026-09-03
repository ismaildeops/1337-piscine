/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 19:15:11 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 16:01:27 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
int     ft_str_is_uppercase(char *str)
{
    int     i;
    
    i = 0;
    while (str[i] != '\0')
    {
        if ('A' <= str[i] && str[i] <= 'Z')
        {
            return 0;
        }
        else
        {
            i++;
        }  
    }
    return 1;   
}