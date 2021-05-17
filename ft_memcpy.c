/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 13:29:21 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/17 13:53:37 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t		i;
	char		*aux_dst;
	const char	*aux_src;

	aux_dst = dest;
	aux_src = src;
	i = 0;
	while (i < n && dest != src)
	{
		aux_dst[i] = aux_src[i];
		i++;
	}
	return (dest);
}