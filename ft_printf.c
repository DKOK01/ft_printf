/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:47:55 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/17 10:58:34 by aysadeq          ###   ########.fr       */
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
		count = write(1, "%", 1);
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	int			count;

	va_start(args, fmt);
	count = 0;
	while (*fmt)
	{
		if (*fmt != '%')
			count += write(1, fmt, 1);
		else
			count += handl_fmt(++fmt, args);
		fmt++;
	}
	va_end(args);
	return (count);
}

// int main()
// {
// 	char *ptr = NULL;
// 	int count = ft_printf("%p\n", ptr);
// 	printf("%d \n",count);
// 	count = printf("%p\n", ptr);
// 	printf("%d \n",count);
// 	return 0;
// }
