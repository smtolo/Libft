/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 01:28:06 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/17 01:46:02 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*s1;
	const char	*s2;

	s1 = (char*)dst;
	s2 = (char*)src;
	if (s1 > s2)
	{
		while (len > 0)
		{
			len--;
			s1[len] = s2[len];
		}
	}
	else
		ft_memcpy(s1, s2, len);
	return (s1);
}
