/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/23 17:09:40 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 15:29:10 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*str;
	char	*needle;

	if (!s)
		return (NULL);
	str = ft_strchr(s, s[start]);
	needle = ft_strnew(len);
	if (needle == NULL)
		return (NULL);
	ft_memmove((void*)needle, (void*)str, (len));
	ft_strcat(needle, "\0");
	return (needle);
}
