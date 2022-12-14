# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abez-zir <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/12 15:39:44 by abez-zir          #+#    #+#              #
#    Updated: 2022/12/14 11:18:31 by abez-zir         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SOURCES =	ft_printf.c \
			ft_hexa_ptr.c \
			ft_hexa_low.c \
			ft_hexa_up.c \
			ft_putchar.c \
			ft_putnbr.c \
			ft_putstr.c \
			ft_the_job.c 

OBJECTS = $(SOURCES:.c=.o)

flags = -Wall -Wextra -Werror

all: $(NAME) 

$(NAME): $(OBJECTS)
	@ar -r $(NAME) $(OBJECTS)

%.o: %.c printf.h
	cc -c $(flags) $<

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all
