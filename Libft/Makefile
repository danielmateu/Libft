# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:40:17 by damateu-          #+#    #+#              #
#    Updated: 2024/01/24 12:12:50 by damateu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

INCL = libft.h
# Flags del compilador
CFLAGS = -Wall -Wextra -Werror
SRC = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c ft_memset.c ft_strncmp.c ft_bzero.c ft_memmove.c ft_strlcpy.c ft_strtrim.c ft_strlcat.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strjoin.c ft_strrchr.c ft_substr.c ft_split.c ft_strdup.c ft_memcpy.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c 
#SRC = $(wildcard ft_*.c)

# Archivos bonus
SRC_BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c

# Compilador
CC = gcc

# Archivos objeto
OBJ = $(SRC:.c=.o)

# Archivos objeto bonus
OBJ_BONUS = $(SRC_BONUS:.c=.o)

# Regla por defecto
all: $(NAME)

# Regla para crear la biblioteca 
#$(NAME):$(OBJ)
#	ar rc $(NAME) $(OBJ)

$(NAME):$(OBJ) 
	ar rc $(NAME) $(OBJ) 

# Regla para crear archivos objeto
%.o : %.c
	$(CC) $(CFLAGS) -c $<

# Regla para eliminar los archivos objeto
clean:
	rm -f $(OBJ) $(OBJ_BONUS)

# Regla para borrar archivos objeto y la biblioteca
fclean: clean
	rm -f $(NAME)
# Regla para recompliar todo
re: fclean all

# Regla bonus, en la que se añaden los headers, librerias o 
# funciones que esten prohibidas en la parte principal del proyecto.
# Los bonus deben estar en archivos distintos _bonus.{c/h}. 
bonus: $(OBJ_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)

# Regla para borrar los archivos objeto y la biblioteca bonus
#bonus_clean: clean
#	rm -f $(OBJ_BONUS)


.PHONY: all clean fclean re
