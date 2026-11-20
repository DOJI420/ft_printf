/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:16:07 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/20 12:19:03 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	size_t	len;
	ssize_t	ret;

	if (str == NULL)
		str = "(null)";
	len = 0;
	while (str[len])
		len++;
	if (len > INT_MAX)
		return (-1);
	ret = write(1, str, len);
	if (ret == -1)
		return (-1);
	return ((int)ret);
}
