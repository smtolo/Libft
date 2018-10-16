/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 04:30:00 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/23 13:35:39 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*dest;
	size_t		len;
	size_t		i;

	len = ft_strlen((char*)s1);
	i = 0;
	dest = (char*)malloc(sizeof(char) * (len + 1));
	if (!dest || !s1)
		return (NULL);
	while (i <= len)
	{
		dest[i] = s1[i];
		i++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
