/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yibn-yah <yibn-yah@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 11:51:32 by yibn-yah          #+#    #+#             */
/*   Updated: 2026/11/20 08:29:49 by yibn-yah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	long	nb;
	int		count;
	int		ret;

	nb = n;
	count = 0;
	if (nb < 0)
	{
		if (ft_print_char('-') == -1)
			return (-1);
		count++;
		nb = -nb;
	}
	if (nb >= 10)
	{
		ret = ft_print_nbr(nb / 10);
		if (ret == -1)
			return (-1);
		count += ret;
	}
	if (ft_print_char((nb % 10) + '0') == -1)
		return (-1);
	return (count + 1);
}
