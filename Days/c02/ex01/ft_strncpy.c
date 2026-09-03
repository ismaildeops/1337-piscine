/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/17 16:41:31 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 15:51:19 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char    *ft_strncpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	while(n > i && src[i])
	{
		dest[i] = src[i];
        i++;
	}
    while (n > i)
    {
        dest[i] = '\0';
        i++;
    } 
	return (dest);  
}