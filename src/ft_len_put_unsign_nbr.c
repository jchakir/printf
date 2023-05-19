/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_len_put_unsign_nbr.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 22:14:01 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 16:05:41 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_len_put_unsign_nbr(unsigned int nbr)
{
	int		len;
	char	*str;

	str = ft_itoa_for_printf((long)nbr);
	len = ft_len_putstr(str);
	free(str);
	return (len);
}
