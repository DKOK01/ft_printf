/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:47:55 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/18 17:40:21 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handl_fmt(const char *fmt, va_list args)
{
	int	count;

	count = 0;
	if (*fmt == 'c')
		count = ft_putchar(va_arg(args, int));
	else if (*fmt == 's')
		count = ft_putstr(va_arg(args, char *));
	else if (*fmt == 'd' || *fmt == 'i')
		count = ft_putnbr(va_arg(args, int));
	else if (*fmt == 'u')
		count = ft_putnbr(va_arg(args, unsigned int));
	else if (*fmt == 'x' || *fmt == 'X')
		count = ft_puthex(va_arg(args, unsigned int),*fmt);
	else if (*fmt == 'p')
		count = ft_putptr(va_arg(args, void *));
	else if (*fmt == '%')
		count = catch_err(ft_putchar('%'));
	else if (*fmt == '\0')
		return (-1);
	else
	{
		count = catch_err(ft_putchar('%'));
		count += catch_err(ft_putchar(*fmt));
	}
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	int			count;
	int			n;

	if (!fmt)
		return (-1);
	va_start(args, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt != '%')
			count += catch_err(ft_putchar(*fmt));
		else
		{
			n = handl_fmt(++fmt, args);
			if (n == -1)
				return (va_end(args), (-1));
			count += n;
		}
		fmt++;
	}
	va_end(args);
	if (catch_err(0) == -1)
		return (-1);
	return (count);
}
