/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salak2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 15:52:25 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/16 12:02:00 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	num_length(long n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

int	ft_putnbr(long n)
{
	int		count;
	char	c;

	if (n == -2147483648)
	{
		write (1, "-2147483648", 11);
		return (11);
	}
	count = num_length(n);
	if (n < 0)
	{
		write (1, "-", 1);
		n = -n;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
	}
	c = (n % 10) + '0';
	write (1, &c, 1);
	return (count);
}
