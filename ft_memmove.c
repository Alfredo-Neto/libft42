/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:18:47 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/01 21:50:40 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *aux_dst;
	char *aux_src;

	aux_dst = dst;
	aux_src = (char *)src;
	if (dst > src) 
	{
		aux_dst = aux_dst + len - 1;
		aux_src = aux_src + len - 1;
		while (len-- >= 1)
			*aux_dst-- = *aux_src--;
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
