/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 16:04:45 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 16:04:52 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*str;

	if (!s || !f)
		return (0);
	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (*s)
	{
		str[i] = f(*s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
