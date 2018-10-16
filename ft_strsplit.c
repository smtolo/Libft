/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 16:40:15 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/24 18:22:39 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcount(char *s, char c)
{
	int		i;
	int		word;

	i = 0;
	word = 0;
	if (s)
	{
		while (s[i] == c)
			i++;
		while (s[i])
		{
			if (i == 0 && s[i] != c)
				word++;
			else if (s[i] != c && s[i - 1] == c)
				word++;
			i++;
		}
	}
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	char	**vector;
	int		nbr_words;
	int		word_len;

	i = 0;
	nbr_words = ft_wordcount((char*)s, c);
	if ((vector = (char**)malloc(sizeof(char*) * (nbr_words + 1))))
	{
		word_len = 0;
		while (i < nbr_words)
		{
			while (*s == c)
				s++;
			while (*s != c && *s)
			{
				word_len++;
				s++;
			}
			vector[i++] = ft_strsub(s - word_len, 0, word_len);
			word_len = 0;
		}
		vector[i] = NULL;
	}
	return (vector);
}
