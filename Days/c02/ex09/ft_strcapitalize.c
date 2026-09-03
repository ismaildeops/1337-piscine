/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 10:27:31 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/20 11:43:15 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
char *ft_strcapitalize(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        while (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }

        if (i == 0)
        {
            str[i] = str[i] - 32;
        }
        else if (!(str[i-1] >= 'a' && str[i-1] <= 'z' || str[i-1] >= '0' && str[i-1] <= '9' || str[i-1] >= 'A' && str[i-1] <= 'Z'))
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                str[i] = str[i] - 32;
            }
        }
        i++;
    }
    return str;
}



int main()
{
    char str[] = {"hi, how aRe yOu? 42Words forty-two; fifty+and+one hello"};
    ft_strcapitalize(str);
    printf("%s" ,str);
}