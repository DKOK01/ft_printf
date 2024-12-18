/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_char_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 13:27:43 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/18 15:37:13 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *str)
{
	int		count;
	int		i;
	char	*ptr;

	count = 0;
	if (!str)
	{
		ptr = "(null)";
		i = 0;
		while (i < 6)
		{
			count += catch_err(ft_putchar(ptr[i]));
			i++;
		}
		return (count);
	}
	while (*str)
	{
		count += catch_err(ft_putchar(*str));
		str++;
	}
	return (count);
}

int	catch_err(int ret)
{
	static int	n;

	if (ret == -1)
		n = -1;
	if (n == -1)
		return (-1);
	return (1);
}
