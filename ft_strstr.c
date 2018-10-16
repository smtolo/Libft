/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 13:53:36 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/21 15:17:30 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	if (*needle == '\0' && *haystack == '\0')
		return ((char*)haystack);
	while (haystack[a])
	{
		b = a;
		c = 0;
		if (needle[c] == '\0')
			return ((char*)(&haystack[a]));
		while (haystack[b] && needle[c] && haystack[b] == needle[c])
		{
			b++;
			c++;
			if (needle[c] == '\0')
				return ((char*)(&haystack[a]));
		}
		a++;
	}
	return (0);
}
