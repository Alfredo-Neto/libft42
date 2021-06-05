/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:16:33 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/05 06:09:20 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	res;

	index = 0;
	sign = 1;
	res = 0;
	while (str[index] == ' ' || (str[index] >= '\t' && str[index] <= '\r'))
		index++;
	if (str[index] == '+' || str[index] == '-')
	{
		if (str[index] == '-')
			sign *= -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9')
	{
		res = (str[index] - '0') + (res * 10);
		index++;
	}
	return (res * sign);
}
