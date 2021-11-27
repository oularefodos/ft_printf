/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foulare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 17:07:40 by foulare           #+#    #+#             */
/*   Updated: 2021/11/19 22:50:43 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdarg.h>
#include <unistd.h>
#include "ft_printf.h"

int	ft_isvar(char c)
{
	char	*str;
	int		i;

	str = "cdpsiuxX%";
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_call(char c, va_list lst)
{
	int	n;

	n = 0;
	if (c == 'd' || c == 'i')
		n += ft_isint(va_arg(lst, int));
	else if (c == 's')
		n += ft_putstr_fd(va_arg(lst, char *), 1);
	else if (c == 'c')
		n += ft_putchar_fd(va_arg(lst, int), 1);
	else if (c == 'x')
		n += ft_ishexa(va_arg(lst, unsigned int));
	else if (c == 'X')
		n += ft_ishexamaj(va_arg(lst, unsigned int));
	else if (c == 'u')
		n += ft_isunsigned(va_arg(lst, unsigned int));
	else if (c == 'p')
		n += ft_isaddr(va_arg(lst, void *));
	else if (c == '%')
	{
		n++;
		write (1, "%", 1);
	}
	return (n);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	va_list	lst;
	int		n;

	n = 0;
	i = 0;
	if (!str)
		return (0);
	va_start(lst, str);
	while (str[i])
	{
		if (str[i] == '%' && ft_isvar(str[i + 1]))
		{
			n += ft_call(str[i + 1], lst);
			i++;
		}
		else
			n += ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(lst);
	return (n);
}
