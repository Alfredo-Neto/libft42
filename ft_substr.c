/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/28 17:58:18 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/11 16:27:40 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	substr_len;
	char	*substr;

	i = 0;
	if (s == 0)
		return (0);
	substr_len = ft_strlen(s);
	if (substr_len < len)
		substr = (char *)malloc((substr_len + 1) * sizeof(char));
	else
		substr = (char *)malloc((len + 1) * sizeof(char));
	if (substr == 0)
		return (0);
	while (i < len && (start + i) < substr_len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
