/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:19:06 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 16:01:11 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	n;
	size_t	k;

	n = 0;
	k = 0;
	if (ft_strlen(dst) < dstsize)
		n = ft_strlen(dst);
	else
		n = dstsize;
	n += ft_strlen(src);
	if (dstsize)
	{
		while (*dst)
		{
			dst++;
			k++;
		}
		while (*src && k < (dstsize - 1))
		{
			*dst++ = *src++;
			k++;
		}
		*dst = '\0';
	}
	return (n);
}
