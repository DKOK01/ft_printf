/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salak1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:27:43 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/17 11:16:08 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int	count;

	count = 0;
	if (!str)
	{
		count = write(1, "(null)", 6);
		return (count);
	}
	while (*str)
	{
		count += ft_putchar(*str);
		str++;
	}
	return (count);
}
