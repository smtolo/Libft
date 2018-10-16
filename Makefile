# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smtolo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/09/01 13:37:16 by smtolo            #+#    #+#              #
#    Updated: 2018/06/26 11:13:14 by smtolo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ft_memset.c	ft_bzero.c	ft_memcpy.c	ft_memccpy.c ft_memchr.c\
	  ft_memmove.c ft_memcmp.c ft_strlen.c ft_strdup.c ft_strcpy.c ft_strncpy.c\
	  ft_strcat.c ft_strncat.c ft_strchr.c ft_strrchr.c ft_strstr.c\
	  ft_strnstr.c ft_strcmp.c ft_strncmp.c ft_isalnum.c ft_isalpha.c\
	  ft_isdigit.c ft_isascii.c ft_isprint.c ft_tolower.c ft_toupper.c\
	  ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c\
	  ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c ft_striter.c ft_striteri.c\
	  ft_strclr.c ft_memdel.c ft_strdel.c ft_strnew.c ft_strsub.c ft_memalloc.c\
	  ft_atoi.c ft_strequ.c ft_strnequ.c ft_strjoin.c ft_strmap.c ft_strmapi.c\
	  ft_strtrim.c ft_isspace.c ft_strlcat.c ft_strsplit.c ft_itoa.c\
	  ft_itoa_base.c\

OBJ = $(SRC:.c=.o)

HEADER = libft.h

FLAG = -Wall -Werror -Wextra

all : $(NAME)

$(NAME):
		gcc -c -I $(HEADER) $(SRC)
		ar rc $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:
		rm -f $(OBJ)
		rm -f $(NAME)

re: fclean all