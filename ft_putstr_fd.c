/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foulare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 16:39:03 by foulare           #+#    #+#             */
/*   Updated: 2021/11/18 21:20:42 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (s[i])
	{
		write (fd, &s[i], 1);
		i++;
	}
	return (i);
}
