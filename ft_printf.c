/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:44:45 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/20 11:49:09 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	int		count;
	int		ret;
	va_list	args;

	ret = 0;
	if (format == NULL)
		return (-1);
	va_start(args, format);
	count = ft_format(format, args);
	if (ret == -1 || count > INT_MAX - ret)
		return (-1);
	count += ret;
	va_end(args);
	return (count);
}
