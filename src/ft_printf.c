/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 14:09:10 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 16:59:48 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_printf_manager(va_list args, char c)
{
	if (c == 'd' || c == 'i')
		return (ft_len_putnbr(va_arg(args, int)));
	else if (c == 'c')
		return (ft_len_putchar(va_arg(args, int)));
	else if (c == 's')
		return (ft_len_putstr(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_len_putaddress(va_arg(args, void *)));
	else if (c == 'u')
		return (ft_len_put_unsign_nbr(va_arg(args, unsigned int)));
	else if (c == 'x' || c == 'X')
		return (ft_len_puthex(va_arg(args, int), c));
	else
		write(1, &c, 1);
	return (1);
}

int	ft_printf(const char *format, ...)
{
	int		len;
	va_list	args;

	len = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += ft_printf_manager(args, *format);
		}
		else
			len += ft_len_putchar(*format);
		format++;
	}
	va_end(args);
	return (len);
}
