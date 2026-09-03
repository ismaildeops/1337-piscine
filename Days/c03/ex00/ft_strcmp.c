/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:24:58 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/18 19:51:43 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int     i;
    i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0')
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

// 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.

int main()
{
    char s1[] = {"AAAA"};
    char s2[] = {"AAAAZ"};
    printf("%d" ,ft_strcmp(s1, s2));

}