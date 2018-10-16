/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smtolo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 11:14:07 by smtolo            #+#    #+#             */
/*   Updated: 2018/06/26 11:44:10 by smtolo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa_base(int value, int base)
{
	int		sign;
	long	nbr;
	int		len;
	char	*str;

	nbr = (value < 0) ? -(long)value : value;
	sign = (value < 0 && base == 10) ? -1 : 0;
	len = 1 - sign;
	while (nbr /= base)
		len++;
	if (!(str = (char*)malloc(sizeof(char) * (len + 1))))
		return (0);
	nbr = (value < 0) ? -(long)value : value;
	str[len] = '\0';
	while (len-- + sign)
	{
		str[len] = (nbr % base < 10) ? nbr % base + '0' : nbr % base + 'A' - 10;
		nbr /= base;
	}
	!len ? str[0] = '-' : 0;
	return (str);
}
