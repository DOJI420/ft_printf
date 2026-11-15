/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:44:45 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/14 20:38:39 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	va_list	args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = ft_format(format, args);
	va_end(args);
	return (count);
}
