# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:40:17 by damateu-          #+#    #+#              #
#    Updated: 2024/01/29 11:15:19 by damateu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 

BSRCS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

# Library header
HEAD	= libft.h
# Object files
OBJS	= ${SRCS:.c=.o}
# Bonus object files
BOBJS	= ${BSRCS:.c=.o}
# Name of the library
NAME	= libft.a
# Comando para crear la libreria, ar rcs crea la libreria y la hace estatica. a = create, r = insert, c = dont show errors, s = create static library
# ar-> create, insert, dont show errors, create static library
#rcs = create, dont show errors, create static library 
AR		= ar rcs
# Delete command (used to delete files and folders)
RM		= rm -f
# Compiler command
CC		= cc
# Compiler flags (here "-Wall -Wextra -Werror" for mandatory part)
CFLAGS	= -Wall -Wextra -Werror
# regla por defecto, compila el programa
all: 		${NAME}
# Regla para compilar los archivos .c y crear los archivos .o
%.o:		%.c
				${CC} ${CFLAGS} -c $< -DMP
# Esta regla es la que crea la libreria a partir de los archivos .o
${NAME}:	${OBJS} ${HEAD} Makefile
				${AR} ${NAME} ${OBJS}
# This rule is used to delete all the object files
clean:
				${RM} ${OBJS} ${BOBJS} do_bonus
# This rule is used to delete all the object files and the library file (.a)
fclean:		clean
				${RM} ${NAME}
# This rule is used to delete all the object files and the library file (.a)
re:			fclean all
# This rule is used to compile the bonus part
bonus:		do_bonus
# This rule is used to compile the bonus part and create the library file (.a) from the object files (bonus part)
do_bonus:	${NAME} ${BOBJS} ${HEAD} Makefile
			${AR} ${NAME} ${BOBJS}
			touch do_bonus
# .PHONY se usa para que no se confunda con un archivo que se llame igual que una regla
.PHONY:		clean fclean re all bonus