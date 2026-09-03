/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/18 18:37:05 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/19 09:34:36 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int     i;
    i = 0;

    
    while (i < n - 1 && s1[i] == s2[i] && s1[i] && s2[i])
    {
        if (n == 0)
        {
            return;
        }
        
        i++;
    }
    return (s1[i] - s2[i]);

}

// 0, if the s1 and s2 are equal;

//        • a negative value if s1 is less than s2;

//        • a positive value if s1 is greater than s2.

int main()
{
    char s1[] = {"HELLOd"};
    char s2[] = {"HELLOaaa"};
    int n = 0;
    printf("%d" ,ft_strncmp("abc", "abcA" ,0));

}