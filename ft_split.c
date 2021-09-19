/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 15:57:05 by ade-agui          #+#    #+#             */
/*   Updated: 2021/09/19 18:50:04 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(char const *s, char c)
{
	int	i;
	int	n_word;
	int	key;

	i = 0;
	key = 0;
	n_word = 0;
	while (s[i] != '\0' && *s != '\0')
	{
		if (s[i] != c && key == 0)
		{
			key = 1;
			n_word++;
		}
		else if (s[i] == c)
			key = 0;
		i++;
	}
	return (n_word);
}

static char	*substring(char const *s, int begin, int end)
{
	char	*substring;
	int		len;
	int		i;

	len = end - begin + 1;
	substring = (char *)malloc(len * sizeof(char));
	if (substring == 0)
		return (NULL);
	i = 0;
	while (begin < end)
		substring[i++] = s[begin++];
	substring[i] = '\0';
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		init_w;
	int		i;
	int		j;

	if (s == 0)
		return (NULL);
	i = -1;
	j = 0;
	init_w = -1;
	split = malloc((count_substrings(s, c) + 1) * sizeof(char *));
	if (split == 0)
		return (NULL);
	while ((size_t)++i <= ft_strlen(s))
	{
		if (s[i] != c && init_w < 0)
			init_w = i;
		else if ((s[i] == c || (size_t)i == ft_strlen(s)) && init_w >= 0)
		{
			split[j++] = substring(s, init_w, i);
			init_w = -1;
		}
	}
	split[j] = NULL;
	return (split);
}