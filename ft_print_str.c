/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 12:16:07 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/16 10:45:38 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_str(char *str)
{
	int		len;

	len = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str && str[len] != '\0')
		len += write(1, &str[len], 1);
	return (len);
}
