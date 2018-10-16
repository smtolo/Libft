/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 17:22:13 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 17:24:44 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *s1, const char *s2, size_t size)
{
	size_t	len;
	size_t	len2;
	size_t	i;

	len = ft_strlen(s1);
	len2 = ft_strlen(s2);
	i = 0;
	if (len >= size)
		return (len2 + size);
	while (s1[i] != '\0' && i < size - 1)
		i++;
	while (*s2 != '\0' && i < size - 1)
	{
		s1[i] = *s2;
		i++;
		s2++;
	}
	s1[i] = '\0';
	return (len + len2);
}
