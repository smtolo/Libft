/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 13:36:24 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 18:21:06 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*cat;
	int			i;
	int			j;
	int			len;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	cat = ft_strnew(len);
	if (cat == NULL)
		return (NULL);
	while (s1[i])
		cat[j++] = s1[i++];
	i = 0;
	while (s2[i])
		cat[j++] = s2[i++];
	cat[j] = '\0';
	return (cat);
}
