/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 23:01:49 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/17 01:25:10 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *str;
	unsigned char letter;

	letter = (unsigned char)c;
	str = (unsigned char*)s;
	while (n > 0)
	{
		if (*str != letter)
			str++;
		else
			return (str);
		n--;
	}
	return (0);
}
