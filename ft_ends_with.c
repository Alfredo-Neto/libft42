/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ends_with.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 02:23:59 by ade-agui          #+#    #+#             */
/*   Updated: 2021/11/09 02:24:02 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_ends_with(const char *str, const char *tail)
{
	size_t	str_len;
	size_t	tail_len;

	str_len = ft_strlen(str);
	tail_len = ft_strlen(tail);
	if (tail_len > str_len)
		return (0);
	while (str_len-- && tail_len--)
		if (str[str_len] != tail[tail_len])
			return (0);
	return (1);
}
