/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 01:11:22 by ade-agui          #+#    #+#             */
/*   Updated: 2021/11/09 02:26:36 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= strlen(dst))
		return (dstsize + strlen(src));
	c = strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
		dst[c++] = src[d++];
	dst[c] = '\0';
	return (strlen(dst) + strlen(&src[d]));
}
