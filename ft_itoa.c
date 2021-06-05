/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 05:53:48 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/05 02:01:35 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int        ft_len(int num)
{
    size_t len;  
    len = (num <= 0)? 1 : 0;
    while (num != 0)
    {   
        num = num / 10;                    
        len++; 
    }
    return (len);
}

int        ft_to_positive(int num)
{
    return( (num < 0 ? -num : num));
}


char    *ft_itoa(int n)
{
    int sign;
    int len;
    char *result;

    sign = (n < 0) ? -1 : 1;
    len = ft_len(n);
    result = (char *)malloc(sizeof(char) * len + 1);
    if (result == NULL)
        return (0);
    result[len] = '\0';
    len--;
    while (len >= 0)
    {
        result[len] = '0' + ft_to_positive(n % 10);
        n = ft_to_positive(n / 10);
        len--;
    }
    if (sign == -1)
        result[0] = '-';
    return (result);
}
