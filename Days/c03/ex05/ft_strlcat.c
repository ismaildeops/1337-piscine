/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/24 18:43:33 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/24 18:43:37 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_strlen(char *s)
{
    int i = 0;
    while (s[i])
    {
        i++;
    }
    return (i);
    
}
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int d_len;
    unsigned int s_len;
    unsigned int i;
    
    d_len = ft_strlen(dest); //5
    s_len = ft_strlen(src); //6

    if (size <= d_len)
    {
        return(size + s_len); // 5 + 6 = 11
    }
    i = 0;
    while (src[i] && d_len + i < size - 1)
    {
        dest[d_len + i] = src[i];
        i++;
    }
    dest[d_len + i] = '\0';
    return (d_len + s_len);
}



int main()
{
    char dest[20] = "Hello";
    char src[]  = " World im fffffffffffffffff";
    printf("%u", ft_strlcat(dest, src, 12));

}
//طول dest الأصلي 
// + طول src الأصلي وليس طول النتيجة التي تم نسخها فعليًا.
