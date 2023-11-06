# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhmimchi <rhmimchi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/02 14:17:38 by rhmimchi          #+#    #+#              #
#    Updated: 2023/11/06 01:13:18 by rhmimchi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC_REAUIRED =     ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
        ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
        ft_strncmp.c ft_memset.c ft_bzero.c ft_memchr.c ft_memcpy.c ft_atoi.c ft_memmove.c ft_memcmp.c \
		ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c \
		ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c

OBJ_REAUIRED = $(SRC_REAUIRED:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
NAME = libft.a

all: $(NAME)

$(NAME): $(OBJ_REAUIRED)
	ar	-rcs	$(NAME)	$(OBJ_REAUIRED)
    
clean:
	rm -f $(OBJ_REAUIRED)

fclean: clean
	rm -f $(NAME)

re: fclean all