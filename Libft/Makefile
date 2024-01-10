# Nombre del archivo de la biblioteca
NAME = libft.a 

# Archivo de cabecera
INCL = libft.h 

# Flags del complilador
CFLAGS = -Wall -Wextra -Werror 

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c

# Comando para compilar
CC = gcc 

# Archivos objeto
OBJ = $(SRC:.c=.o) 

# Regla por defecto
all: $(NAME) 

# Regla para crear la biblioteca
$(NAME): $(OBJ) 
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

# Regla para crear los archivos objeto
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
# Regla para borrar los archivos objeto
clean: 
	rm -f $(OBJ)
# Regla para borrar los archivos objeto y la biblioteca
fclean: clean 
	rm -f $(NAME)

# Regla para recompilar todo
re: fclean all 

# Reglas que no son archivos
.PHONY: all clean fclean re 
