/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_puthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 00:49:52 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 17:13:39 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_convert_to_hex(unsigned long nbr, char x)
{
	char	str[16];
	char	*base;
	int		len;
	int		i;

	len = 0;
	if (x == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	while (nbr / 16)
	{
		str[len++] = base[nbr % 16];
		nbr = nbr / 16;
	}
	str[len++] = base[nbr % 16];
	i = len;
	while (i--)
		write(1, &str[i], 1);
	return (len);
}

int	ft_len_puthex(int nbr, char x)
{
	int				len;

	len = ft_convert_to_hex((unsigned int)nbr, x);
	return (len);
}

int	ft_len_putaddress(void *pointer)
{
	unsigned long	nbr;
	int				len;

	len = 2;
	nbr = (unsigned long)pointer;
	write(1, "0x", 2);
	len += ft_convert_to_hex(nbr, 'x');
	return (len);
}
