/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 05:53:48 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/03 06:07:45 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		signal;

	len = n <= 0 ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	signal = n < 0 ? -1 : 1;
	if (!(res = (char *)malloc((len + 1) * sizeof(char))))
		return (0);
	n = n < 0 ? -n : n;
	res[len--] = '\0';
	while (len >= 0)
	{
		res[len--] = (n % 10) + '0';
		n /= 10;
	}
	if (signal == -1)
		res[0] = '-';
	return (res);
}
