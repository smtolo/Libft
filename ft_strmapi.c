/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 16:05:06 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 16:06:22 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned	int	i;
	char			*str;

	if (!s || !f)
		return (0);
	i = 0;
	str = ft_strdup(s);
	if (str == NULL)
		return (NULL);
	while (*s)
	{
		str[i] = f(i, *s++);
		i++;
	}
	str[i] = '\0';
	return (str);
}
