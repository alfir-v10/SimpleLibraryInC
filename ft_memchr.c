/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:18:04 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 15:31:24 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *arr;
	unsigned char ac;

	arr = (unsigned char *)s;
	ac = (unsigned char)c;
	while (n)
	{
		if (*arr == ac)
			return (arr);
		arr++;
		n--;
	}
	return (NULL);
}
