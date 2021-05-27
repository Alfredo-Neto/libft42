/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 09:09:06 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/27 09:32:58 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	size_t	tot_size;
	void	*dst;

	tot_size = size * nmemb;
	if (!(dst = malloc(tot_size)))
		return (0);
	ft_memset(dst, 0, tot_size);
	return (dst);
}
