/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:16:12 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 14:02:40 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;
	unsigned char n;

	dest = (unsigned char *)b;
	n = (unsigned char)c;
	while (len--)
		*dest++ = n;
	return (b);
}
