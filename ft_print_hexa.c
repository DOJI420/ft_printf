/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hexa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 19:44:06 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/20 09:08:00 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hexa(unsigned int num, const char *format)
{
	char	*base;
	char	arr[8];
	int		count;
	int		printed;

	printed = 0;
	count = 0;
	if (*format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (num == 0)
		arr[count++] = base[0];
	while (num > 0)
	{
		arr[count++] = base[num % 16];
		num = num / 16;
	}
	while (count > 0)
	{
		if (ft_print_char(arr[--count]) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}
