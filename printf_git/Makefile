# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: najgharb <najgharb@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/28 13:00:56 by najgharb          #+#    #+#              #
#    Updated: 2024/03/22 11:14:03 by najgharb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror -g

AR = ar rcs

SRCS = ft_character.c\
		ft_hexadicimal.c\
		ft_number.c\
		ft_printf.c\
		ft_ptr.c\
		ft_strg.c\
		ft_unsigned.c\

		
OBJS = $(SRCS:%.c=%.o)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) 

fclean: clean
	rm -f $(NAME)

re:	fclean all

all: $(NAME)

.PHONY: all clean fclean re