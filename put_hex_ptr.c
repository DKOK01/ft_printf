/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_hex_ptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:25:27 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/18 11:40:03 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned long n, char fmt)
{
	char	*base;
	char	c;
	int		count;

	count = 0;
	if (fmt == 'x')
		base = "0123456789abcdef";
	else
		base = "0123456789ABCDEF";
	if (n >= 16)
		count += ft_puthex((n / 16), fmt);
	c = base[n % 16];
	count += catch_err(ft_putchar(c));
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count = ft_putstr("(nil)");
		return (count);
	}
	count = ft_putstr("0x");
	count += ft_puthex((unsigned long)ptr, 'x');
	return (count);
}
