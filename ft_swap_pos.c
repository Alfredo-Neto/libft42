/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap_pos.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 02:17:34 by ade-agui          #+#    #+#             */
/*   Updated: 2021/11/09 02:18:57 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_swap_pos(char *curr_pos,
	char *next_pos, char curr_val, char next_val)
{
	*curr_pos = next_val;
	*next_pos = curr_val;
}
