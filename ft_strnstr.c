/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 00:42:42 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/27 04:28:57 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *  ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t	count_little;
    size_t	count_big;

	count_big = 0;
	if (little[0] == '\0')
		return ((char *)big);
    while (big[count_big] != '\0')
    {
		count_little = 0;
		while (big[count_big + count_little] == little[count_little] && (count_big + count_little) < len)
		{
			if (big[count_big + count_little] == '\0' && little[count_little] == '\0')
				return ((char *)&big[count_big]);
			count_little++;
		}
		if (little[count_little] == '\0')
			return ((char *)&big[count_big]);
		count_big++;
    }
	return (0);
}