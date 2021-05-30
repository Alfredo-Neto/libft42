/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/29 18:08:34 by ade-agui          #+#    #+#             */
/*   Updated: 2021/05/29 21:33:11 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 *  Allocates (with malloc(3)) and returns a new
 *  string, which is the result of the concatenation
 *  of ’s1’ and ’s2’.
 */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
    char 	*join;
    size_t len;
    size_t i;
    size_t j;

    len = (ft_strlen(s1) + ft_strlen(s2)) + 1;
    if (!s1 || !s2 || !(join = (char *)malloc(len))) return (0);
	i = 0;
	while (s1[i] != '\0')
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
		join[i++] = s2[j++];
	join[i] = '\0';
	return (join);
}
