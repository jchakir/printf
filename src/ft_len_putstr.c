/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 21:36:29 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 17:28:29 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_putstr(const char *str)
{
	int		len;
	char	*null;

	if (! str)
	{
		null = "(null)";
		write(1, null, 6);
		return (6);
	}
	len = 0;
	while (str[len])
		write(1, &str[len++], 1);
	return (len);
}
