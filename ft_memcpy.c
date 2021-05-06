/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:16:54 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 14:14:24 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *destination, const void *source, size_t n)
{
	unsigned char *dest;
	unsigned char *src;

	if (!destination && !source)
		return (NULL);
	dest = (unsigned char *)destination;
	src = (unsigned char *)source;
	while (n--)
		*dest++ = *src++;
	return (destination);
}
