/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: foulare <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 21:17:05 by foulare           #+#    #+#             */
/*   Updated: 2021/11/20 13:37:06 by foulare          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stddef.h>

int		ft_isint(int nb);
int		ft_printf(const char *str, ...);
char	*ft_itoa(int n);
int		ft_putchar_fd(char c, int fd);
int		ft_putstr_fd(char *s, int fd);
size_t	ft_strlen(char const *str);
char	*ft_puthexa(unsigned int nb);
char	*ft_puthexamaj(unsigned int nb);
int		ft_ishexa(unsigned int nb);
int		ft_ishexamaj(unsigned int nb);
char	*ft_putnbr_u(unsigned int nb);
int		ft_isunsigned(unsigned int nb);
int		ft_isaddr(void *ptr);
char	*ft_putaddr(unsigned int long nb);
#endif
