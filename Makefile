# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: btwee <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/29 19:23:50 by btwee             #+#    #+#              #
#    Updated: 2020/11/15 16:58:59 by btwee            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

.PHONY: all clean fclean re

SRCS = ft_atoi.c \
	   ft_isprint.c \
	   ft_memset.c \
	   ft_strdup.c \
	   ft_strnstr.c \
	   ft_bzero.c \
	   ft_strrchr.c \
	   ft_calloc.c \
	   ft_memccpy.c \
	   ft_strlcat.c \
	   ft_isalnum.c \
	   ft_memchr.c \
	   ft_strlcpy.c \
	   ft_isalpha.c \
	   ft_memcmp.c \
	   ft_strlen.c \
	   ft_tolower.c \
	   ft_isascii.c \
	   ft_memcpy.c \
	   ft_toupper.c \
	   ft_isdigit.c \
	   ft_memmove.c \
	   ft_strchr.c \
	   ft_strncmp.c \
	   ft_substr.c \
	   ft_strjoin.c \
	   ft_strtrim.c \
	   ft_split.c \
	   ft_itoa.c \
	   ft_strmapi.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c

INCLUDES = .

CC = gcc $(FLAGS)

FLAGS = -Wall -Wextra -Werror -I $(INCLUDES)

OBJ = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
clean:
	/bin/rm -f $(OBJ)
fclean: clean
	/bin/rm -f $(NAME)
re: fclean all

