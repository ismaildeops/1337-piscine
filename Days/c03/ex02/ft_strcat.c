/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:41:58 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 18:42:02 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
int strlen_f(char *S)
{
    int i = 0;
    while (S[i])
    {
        i++;
    }
    return (i);
}
char *ft_strcat(char *dest, char *src)
{
    int x = strlen_f(dest);
    int i = 0;
    while (src[i])
    {
        dest[x + i] = src[i];
        i++;
    }
    dest[x + i] = '\0';
    return (dest);
}

int main()
{
    char dest[100] = {"Hello"};
    char src[] = {"World"};
    
    printf("%s", ft_strcat(dest, src));
}
