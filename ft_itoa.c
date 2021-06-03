/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 05:53:48 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/03 07:19:27 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		signal;
	long	nbr;

	nbr = n;
	len = n < 0 ? 1 : 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	signal = nbr < 0 ? -1 : 1;
	if (!(res = (char *)malloc((len + 1))))
		return (0);
	res[len--] = '\0';
	nbr = nbr < 0 ? -nbr : nbr;
	while (nbr > 0)
	{
		res[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (signal == -1)
		res[0] = '-';
	return (res);
}
