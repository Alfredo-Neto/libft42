/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 22:27:50 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/27 00:35:30 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*begin;
	size_t		end;

	begin = s;
	end = ft_strlen(s);
	s = (begin + end);
	while (*s != *begin && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}
