/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:47:55 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/13 17:30:42by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

 static int	handl_fmt(const char *fmt, va_list args)
{
	int	count;

	count = 0;
	if (*fmt == 'c')
	{
		count = ft_putchar(va_arg(args, int));
	}
	else if (*fmt == 's')
	{
		count = ft_putstr(va_arg(args, char *));
	}
	else if (*fmt == 'd')
	{
		count = ft_putnbr(va_arg(args, int));
	}
	return count;
}

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	int		count;

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
	return count;
}

int main()
{
	int count = ft_printf("%d\n", 0);
	printf("%d \n",count);



	count = printf("%d\n", 0);
	printf("%d \n",count);



	return 0;
}
