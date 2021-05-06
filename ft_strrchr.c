/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:19:31 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 16:10:54 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t n;

	n = ft_strlen(s);
	if (s[n] == (char)c)
		return ((char *)(s + n));
	while (n)
	{
		if (s[n - 1] == (char)c)
			return ((char *)(s + n - 1));
		n--;
	}
	return (NULL);
}
