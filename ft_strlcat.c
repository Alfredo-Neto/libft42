/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-agui <ade-agui@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/26 01:11:22 by ade-agui          #+#    #+#             */
/*   Updated: 2021/06/19 18:18:03 by ade-agui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= strlen(dst))
		return (dstsize + strlen(src)); // this is a poten\0_____      // a potentially long string\0
	c = strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize) // 16
		dst[c++] = src[d++];
	dst[c] = '\0';
	return (strlen(dst) + strlen(&src[d]));
}

int main()
{
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 34;
    char buffer[size];

    strcpy(buffer,first);
    r = ft_strlcat(buffer,last,size);

    puts(buffer);
    printf("Value returned: %d\n",r);
    if( r > size )
        puts("String truncated");
    else
        puts("String was fully copied");

    return(0);
}