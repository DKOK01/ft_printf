/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salak3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:25:27 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/16 12:00:53 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int n, char fmt)
{
	char	*base;
	char	c;
	int		count;

	count = 0;
	if (fmt == 'x')
		base = "0123456789abcdef";
	else if (fmt == 'X')
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex((n / 16), fmt);
	c = base[n % 16];
	count += write(1, &c, 1);
	return (count);
}
