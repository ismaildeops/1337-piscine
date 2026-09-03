/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:23:22 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 15:52:14 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
char *ft_strupcase(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        if ('a' <= str[i] && str[i] <= 'z' )
        {
            i++;
        }
        else if('A' <= str[i] && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
            i++;
        }   
    }
    return (str);  
}