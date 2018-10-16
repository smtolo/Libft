/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 21:35:46 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 16:29:34 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = (unsigned char*)dst;
	s2 = (unsigned char*)src;
	while (n > 0)
	{
		*s1 = *s2;
		if (*s1 == (unsigned char)c)
		{
			s1++;
			s2++;
			return (s1);
		}
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (NULL);
	return (0);
}
