/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/09 03:15:38 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/09 03:22:04 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

	if (lst == NULL)
		return (0);
    i = 1;
    while (lst->next != NULL)
    {
		lst = lst->next;
		i++;
	}	
	return (i);
}