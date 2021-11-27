/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_var1.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foulare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 14:08:44 by foulare           #+#    #+#             */
/*   Updated: 2021/11/20 13:34:32 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"
#include <stdlib.h>
#include <unistd.h>

int	ft_isint(int nb)
{
	int		len;
	char	*s;

	s = ft_itoa(nb);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}

int	ft_ishexa(unsigned int nb)
{
	int		len;
	char	*s;

	s = ft_puthexa(nb);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}

int	ft_ishexamaj(unsigned int nb)
{
	int		len;
	char	*s;

	s = ft_puthexamaj(nb);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}

int	ft_isunsigned(unsigned int nb)
{
	int		len;
	char	*s;

	s = ft_putnbr_u(nb);
	len = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (len);
}

int	ft_isaddr(void *ptr)
{
	unsigned int long	addr;
	int					len;
	char				*s;

	addr = (unsigned int long)ptr;
	s = ft_putaddr(addr);
	len = ft_strlen(s);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(s, 1);
	free(s);
	return (len + 2);
}
