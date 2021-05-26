/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:00:17 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/25 21:09:55 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*aux_dst;
	unsigned char	*aux_src;

	aux_dst = (unsigned char *)dest;
	aux_src = (unsigned char *)src;
	while (n--)
	{
		*(aux_dst++) = *aux_src;
		if (*(aux_src++) == (unsigned char)c)
		{
			return ((char *)aux_dst);
		}
	}
	return (0);
}
