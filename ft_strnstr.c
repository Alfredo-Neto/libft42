/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 00:42:42 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/27 05:10:42 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;
	size_t	b;

	b = 0;
	if (little[0] == '\0')
		return ((char *)big);
	while (big[b] != '\0')
	{
		l = 0;
		while (big[b + l] == little[l] && (b + l) < len)
		{
			if (big[b + l] == '\0' && little[l] == '\0')
				return ((char *)&big[b]);
			l++;
		}
		if (little[l] == '\0')
			return ((char *)&big[b]);
		b++;
	}
	return (0);
}
