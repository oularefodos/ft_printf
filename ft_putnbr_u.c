/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foulare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 22:11:43 by foulare           #+#    #+#             */
/*   Updated: 2021/11/19 22:58:25 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_printf.h"

int	ft_len(unsigned int nb)
{
	int	count;

	count = 1;
	while (nb >= 10)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

char	*ft_putnbr_u(unsigned int nb)
{
	int		len;
	char	*str;

	len = ft_len(nb);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	str[len] = '\0';
	len--;
	while (nb >= 10)
	{
		str[len] = (nb % 10) + 48;
		len--;
		nb = nb / 10;
	}
	str[len] = nb + 48;
	return (str);
}
