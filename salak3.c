/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salak3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 10:25:27 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/17 10:59:00 by aysadeq          ###   ########.fr       */
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
	count += write(1, &c, 1);
	return (count);
}

int	ft_putptr(void *ptr)
{
	int	count;

	count = 0;
	if (!ptr)
	{
		count = write(1, "(nil)", 5);
		return (count);
	}
	count = write(1, "0x", 2);
	count += ft_puthex((unsigned long)ptr, 'x');
	return (count);
}
