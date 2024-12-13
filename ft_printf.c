/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:47:55 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/13 12:02:51 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *ftm, ...)
{
	va_list		args;
	size_t		count;
	int			i;
	size_t		lenth;
	va_start(args, ftm);

	count = 0;
	i = 0;
	lenth = ft_strlin(ftm);
	while(i < lenth)
	{
		if (ftm[i] != '%')
		{
			count = write(1,&ftm[i],1);
			i++;
		}
		else
		{
			if (++i == 'c')
				ft_putchar();
		}
		i++;
	}
}
