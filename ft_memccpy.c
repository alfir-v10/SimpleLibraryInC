/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:17:12 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 14:28:41 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	a;
	size_t			m;

	if (!n)
		return (NULL);
	m = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	a = (unsigned char)c;
	while (m < n)
	{
		d[m] = s[m];
		if (s[m] == a)
		{
			m++;
			return (dst + m);
		}
		m++;
	}
	return (NULL);
}
