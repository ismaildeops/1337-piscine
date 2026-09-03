/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:43:09 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 18:43:12 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<stdio.h>
char *ft_strstr(char *str, char *to_find)
{
    int i = 0;
    int j;
    while (str[i])
    {
        j = 0;
        while (str[j + i] == to_find[j])
        {
            j++;
        }
        if (to_find[j] == '\0')
        {
            return (&str[i]);
        } 
        i++;
    }   
}

int main()
{
    char str[] = {"Hello world mes world"};
    char to_find[] = {"mes"};

    printf("%s", ft_strstr(str, to_find));

}
