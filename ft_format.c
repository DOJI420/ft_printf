/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:53:05 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/20 12:23:46 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(const char *format, va_list args)
{
	int	i;
	int	printed;
	int	ret;

	i = 0;
	printed = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
			ret = ft_print_char(format[i++]);
		else
		{
			if (format[i + 1] == '\0')
				return (-1);
			ret = ft_processing(&format[i + 1], args);
			i += 2;
		}
		if (ret == -1 || printed > INT_MAX - ret)
			return (-1);
		printed += ret;
	}
	return (printed);
}
