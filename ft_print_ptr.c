/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 20:03:04 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/19 10:40:37 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	converting(size_t convert, char arr[], int count)
{
	char	*base;

	base = "0123456789abcdef";
	while (convert > 0)
	{
		arr[count] = base[convert % 16];
		convert = convert / 16;
		count++;
	}
	return (count);
}

int	ft_print_ptr(void *ptr)
{
	char	arr[18];
	int		printed;
	int		count;
	size_t	convert;

	count = 0;
	printed = 0;
	if (ptr == NULL)
	{
		if (write(1, "(nil)", 5) == -1)
			return (-1);
		return (5);
	}
	convert = (size_t)ptr;
	count = converting(convert, arr, count);
	arr[count++] = 'x';
	arr[count++] = '0';
	while (count > 0)
	{
		if (ft_print_char(arr[--count]) == -1)
			return (-1);
		printed++;
	}
	return (printed);
}
