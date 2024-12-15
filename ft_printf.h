/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysadeq <aysadeq@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/13 11:47:48 by aysadeq           #+#    #+#             */
/*   Updated: 2024/12/15 14:45:57 by aysadeq          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef FT_PRINTF
#define FT_PRINTF

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

int ft_printf(const char *, ...);
int	ft_strlen(const char *s);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putnbr(long n);


# endif
