/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchakir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:39:45 by jchakir           #+#    #+#             */
/*   Updated: 2021/11/23 17:15:05 by jchakir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

char	*ft_itoa_for_printf(long nbr);
int		ft_len_put_unsign_nbr(unsigned int nbr);
int		ft_len_putchar(char c);
int		ft_len_puthex(int num, char x);
int		ft_len_putaddress(void *pointer);
int		ft_len_putnbr(int nbr);
int		ft_len_putstr(const char *str);
int		ft_printf(const char *format, ...);

#endif
