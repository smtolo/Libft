/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 14:26:48 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/23 11:58:32 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	letter;
	int		i;

	i = 0;
	letter = (char)c;
	while (s[i])
	{
		if (s[i] == letter)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == letter)
		return ((char *)&s[i]);
	return (NULL);
}
