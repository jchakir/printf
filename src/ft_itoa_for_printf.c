/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_for_printf.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:41:13 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 16:05:14 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	ft_len(long num)
{
	int	l;

	l = 0;
	while (num / 10)
	{
		num = num / 10;
		l++;
	}
	return (l + 1);
}

static	char	*ft_setstring(long nbr, int is_negative)
{
	int		len;
	char	*str;

	len = ft_len(nbr);
	str = (char *)malloc((len + is_negative + 1) * sizeof(char));
	if (! str)
		return (str);
	else
		str += len + is_negative;
	*str-- = 0;
	while (nbr / 10)
	{
		*str-- = nbr % 10 + '0';
		nbr /= 10;
	}
	*str = nbr + '0';
	if (is_negative)
		*(--str) = '-';
	return (str);
}

char	*ft_itoa_for_printf(long nbr)
{
	char	*str;
	int		is_negative;

	is_negative = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		is_negative = 1;
	}
	str = ft_setstring(nbr, is_negative);
	return (str);
}
