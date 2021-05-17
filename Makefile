# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 00:19:39 by salee             #+#    #+#              #
#    Updated: 2021/05/13 23:41:00 by salee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE = ./ft_memset.c ./ft_bzero.c ./ft_memcpy.c ./ft_memccpy.c ./ft_memmove.c ./ft_memchr.c ./ft_memcmp.c ./ft_strlen.c ./ft_strlcpy.c ./ft_strlcat.c ./ft_strchr.c ./ft_strrchr.c

OBJECT = ./ft_memset.o ./ft_bzero.o ./ft_memcpy.o ./ft_memccpy.o ./ft_memmove.o ./ft_memchr.o ./ft_memcmp.o ./ft_strlen.o ./ft_strlcpy.o ./ft_strlcat.o ./ft_strchr.o ./ft_strrchr.o

all: ${NAME}

${NAME}: ${OBJECT}
	ar rc libft.a ${OBJECT}

%.o: %.c
	gcc -Wall -Wextra -Werror -c $< -o $@

clean:
	rm -f ${OBJECT}

fclean: clean
	rm -f libft.a

re: fclean all

