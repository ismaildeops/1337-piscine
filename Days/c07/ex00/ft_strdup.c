/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/28 21:38:43 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/28 21:38:46 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
    char *copy;
    int src_len = 0;
    while (src[src_len])
    {
        src_len++;
    }
    
    copy = malloc(src_len + 1 * sizeof(char));
    if (copy == NULL)
        return NULL;
    int i = 0;
    while (i < src_len)
    {
        copy[i] = src[i];
        i++;
    }
    copy[i] = '\0';
    return (copy);
}

int main()
{
    char src[] = "Hello";
    printf("%s", ft_strdup(src));
}
