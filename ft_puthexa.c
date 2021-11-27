/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foulare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 19:48:57 by foulare           #+#    #+#             */
/*   Updated: 2021/11/19 22:55:58 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "ft_printf.h"

int	ft_count(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 16;
		count++;
	}
	return (count);
}

char	*ft_puthexa(unsigned int nb)
{
	char	*base;
	char	*str;
	int		count;

	count = ft_count(nb);
	base = "0123456789abcdef";
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	str[count] = '\0';
	count--;
	while (nb >= 16)
	{
		str[count--] = base[nb % 16];
		nb = nb / 16;
	}
	str[count] = base[nb];
	return (str);
}

char	*ft_puthexamaj(unsigned int nb)
{
	char	*base;
	char	*str;
	int		count;

	count = ft_count(nb);
	base = "0123456789ABCDEF";
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	str[count] = '\0';
	count--;
	while (nb >= 16)
	{
		str[count--] = base[nb % 16];
		nb = nb / 16;
	}
	str[count] = base[nb];
	return (str);
}

int	ft_countlen(unsigned long int nb)
{
	int	count;

	count = 0;
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 16;
		count++;
	}
	return (count);
}

char	*ft_putaddr(unsigned long int nb)
{
	char	*base;
	char	*str;
	int		count;

	count = ft_countlen(nb);
	base = "0123456789abcdef";
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (0);
	str[count] = '\0';
	count--;
	while (nb >= 16)
	{
		str[count--] = base[nb % 16];
		nb = nb / 16;
	}
	str[count] = base[nb];
	return (str);
}
