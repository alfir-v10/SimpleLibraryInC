/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: btwee <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 19:19:51 by btwee             #+#    #+#             */
/*   Updated: 2020/11/09 16:35:50 by btwee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needlen;

	if (!*needle)
		return ((char *)haystack);
	needlen = ft_strlen(needle);
	while (*haystack && needlen <= len)
	{
		if (!ft_memcmp(haystack, needle, needlen))
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}
