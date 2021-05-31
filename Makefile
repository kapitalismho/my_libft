# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: salee <salee@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/11 00:19:39 by salee             #+#    #+#              #
#    Updated: 2021/06/01 06:50:43 by salee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I.

SOURCE = ./ft_memset.c	\
./ft_bzero.c	\
./ft_memcpy.c	\
./ft_memccpy.c	\
./ft_memmove.c	\
./ft_memchr.c	\
./ft_memcmp.c	\
./ft_strlen.c	\
./ft_strlcpy.c	\
./ft_strlcat.c	\
./ft_strchr.c	\
./ft_strrchr.c	\
./ft_strncmp.c	\
./ft_strnstr.c	\
./ft_atoi.c	\
./ft_isalpha.c	\
./ft_isdigit.c	\
./ft_isalnum.c	\
./ft_isascii.c	\
./ft_isprint.c	\
./ft_tolower.c	\
./ft_toupper.c	\
./ft_calloc.c	\
./ft_strdup.c	\
./ft_substr.c	\
./ft_strjoin.c	\
./ft_strtrim.c	\
./ft_split.c	\
./ft_itoa.c		\
./ft_strmapi.c	\
./ft_putchar_fd.c	\
./ft_putstr_fd.c	\
./ft_putendl_fd.c	\
./ft_putnbr_fd.c	\

BONUS_SOURCE = ./ft_lstnew.c	\
./ft_lstadd_front.c	\
./ft_lstsize.c	\

OBJECT = $(SOURCE:%.c=%.o)

BONUS_OBJECT = $(BONUS_SOURCE:%.c=%.o)

ifdef WITH_BONUS
	OBJ_FILES = $(OBJECT) $(BONUS_OBJECT)
else
	OBJ_FILES = $(OBJECT)
endif

all : $(NAME)

$(NAME) : $(OBJ_FILES)
	ar rcs $(NAME) $(OBJECT) $(BONUS_OBJECT)

bonus :
	make WITH_BONUS=1 all
clean :
	rm -f $(OBJECT) $(BONUS_OBJECT)

fclean : clean
	rm -f $(NAME)

re : fclean all
