/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 21:09:36 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/26 21:59:49 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t		i;
	unsigned char aux_c;

	aux_c = c;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == aux_c)
            return ((char *)&s[i]);
		i++;
    }
	return (0);
}