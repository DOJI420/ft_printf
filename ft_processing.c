/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_processing.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/12 18:24:20 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/16 22:55:05 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_processing(const char *format, va_list args)
{
	if (*format == 's')
		return (ft_print_str(va_arg(args, char *)));
	else if (*format == 'x' || *format == 'X')
		return (ft_print_hexa(va_arg(args, unsigned int), format));
	else if (*format == 'd' || *format == 'i')
		return (ft_print_nbr(va_arg(args, int)));
	else if (*format == 'p')
		return (ft_print_ptr(va_arg(args, void *)));
	else if (*format == 'c')
		return (ft_print_char(va_arg(args, int)));
	else if (*format == 'u')
		return (ft_print_unsigned(va_arg(args, unsigned int)));
	else if (*format == '%')
		return (ft_print_char('%'));
	else
	{
		if (ft_print_char('%') == -1)
			return (-1);
		if (ft_print_char(*format) == -1)
			return (-1);
		return (2);
	}
}
