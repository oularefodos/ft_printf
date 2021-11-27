# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: foulare <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 20:37:15 by foulare           #+#    #+#              #
#    Updated: 2021/11/20 13:37:21 by foulare          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libftprintf.a

SRCS=ft_itoa.c ft_puthexa.c ft_putnbr_u.c ft_strlen.c \
	 ft_printf.c  ft_putstr_fd.c ft_putchar_fd.c ft_var1.c

OBJS :=$(SRCS:.c=.o)

CFLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJS)
	ar -cr $@ $^

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
