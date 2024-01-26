# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/09 11:40:17 by damateu-          #+#    #+#              #
#    Updated: 2024/01/26 16:18:14 by damateu-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c 

BSRCS	= ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstlast_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

HEAD	= libft.h

OBJS	= ${SRCS:.c=.o}

BOBJS	= ${BSRCS:.c=.o}

NAME	= libft.a

AR		= ar rcs

RM		= rm -f

CC		= cc

CFLAGS	= -Wall -Wextra -Werror

all: 		${NAME}

%.o:		%.c
				${CC} ${CFLAGS} -c $< -DMP

${NAME}:	${OBJS} ${HEAD} Makefile
				${AR} ${NAME} ${OBJS}

clean:
				${RM} ${OBJS} ${BOBJS} do_bonus

fclean:		clean
				${RM} ${NAME}

re:			fclean all

bonus:		do_bonus

do_bonus:	${NAME} ${BOBJS} ${HEAD} Makefile
			${AR} ${NAME} ${BOBJS}
			touch do_bonus

.PHONY:		clean fclean re all bonus