/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:21:57 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 15:52:08 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
char *ft_strupcase(char *str)
{
    int i = 0;
    
    while (str[i])
    {
        if ('A' <= str[i] && str[i] <= 'Z' )
        {
            i++;
        }
        else if('a' <= str[i] && str[i] <= 'z')
        {
            str[i] = str[i] - 32;
            i++;
        }   
    }
    return (str);  
}