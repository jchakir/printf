/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 19:02:58 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 16:06:36 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_putnbr(int nbr)
{
	char	*str;
	int		len;

	str = ft_itoa_for_printf((long)nbr);
	len = ft_len_putstr(str);
	free(str);
	return (len);
}
