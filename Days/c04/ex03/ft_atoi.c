/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ilaakoub <ilaakoub@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/27 20:14:43 by ilaakoub          #+#    #+#             */
/*   Updated: 2026/08/28 10:07:09 by ilaakoub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *str)
{
    int i = 0;
    int result = 0;
    int sign = 1;
    while (str[i] == ' ' || str[i] >= 9 && str[i] <= 13)
        i++;
    while (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
           sign *= (-1);
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = (result * 10) + (str[i] - 48);
        i++;
    }
    return (result * sign);  
}
