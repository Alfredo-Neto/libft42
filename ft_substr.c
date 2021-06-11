/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:58:18 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/11 01:47:32 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	subs = (char *)malloc(len + 1);
	if (!s || subs == 0)
		return (0);
	i = start;
	j = 0;
	while (i < ft_strlen(s) && j < len)
		subs[j++] = s[i++];
	subs[j] = '\0';
	return (subs);
}
