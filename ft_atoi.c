/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/27 07:16:33 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/13 20:28:16 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_result2(char c)
{
	write(1, &c, 1);
}

void	ft_print_result(int n)
{
	if (n >= 0)
	{
		if (n >= 10)
			ft_print_result(n / 10);
		ft_print_result2(n % 10 + '0');
	}
	else
	{
		ft_print_result2('-');
		if (n <= -10)
			ft_print_result(n / -10);
		ft_print_result2(n % -10 * -1 + '0');
	}
}

int	ft_atoi(const char *str)
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

int main (void)
{
	ft_print_result(ft_atoi("12+23"));
	printf("\n");
	return (0);
}