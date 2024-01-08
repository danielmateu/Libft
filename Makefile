NAME = libft.a # Nombre del archivo de la biblioteca

INCL = libft.h # Archivo de cabecera

CFLAGS = -Wall -Wextra -Werror # Flags del complilador

SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi

CC = gcc # Comando para compilar

OBJ = $(SRC:.c=.o) # Archivos objeto

all: $(NAME) # Regla por defecto

$(NAME): $(OBJ) # Regla para crear la biblioteca
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@ # Regla para crear los archivos objeto

clean: # Regla para borrar los archivos objeto
	rm -f $(OBJ)

fclean: clean # Regla para borrar los archivos objeto y la biblioteca
	rm -f $(NAME)

re: fclean all # Regla para recompilar todo

.PHONY: all clean fclean re # Reglas que no son archivos
