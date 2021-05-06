/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:39:42 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 18:06:34 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	char	*p;

	if (!s1 || !s2)
		return (NULL);
	new_s = (char *)malloc(ft_strlen((char *)s1) + ft_strlen((char *)s2));
	if (!new_s)
		return (NULL);
	p = new_s;
	while (*s1)
		*new_s++ = *s1++;
	while (*s2)
		*new_s++ = *s2++;
	*new_s = '\0';
	return (p);
}
