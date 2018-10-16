/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:58:56 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/21 16:07:09 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*dst;
	unsigned char	*src;

	dst = (unsigned char*)s1;
	src = (unsigned char*)s2;
	i = 0;
	while ((dst[i] || src[i]) && (i < n))
	{
		if (dst[i] < src[i])
			return (dst[i] - src[i]);
		if (dst[i] > src[i])
			return (dst[i] - src[i]);
		i++;
	}
	return (0);
}
