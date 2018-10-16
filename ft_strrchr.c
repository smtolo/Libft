/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 16:27:55 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/20 16:50:07 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	letter;
	int		i;

	i = ft_strlen(s);
	letter = (char)c;
	while (i >= 0)
	{
		if (s[i] == letter)
			return ((char *)&s[i]);
		i--;
	}
	if (s[i] == letter)
		return ((char *)&s[i]);
	return (NULL);
}
