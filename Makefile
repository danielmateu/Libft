# Nombre del archivo de la biblioteca
NAME = libft.a 

# Archivo de cabecera
INCL = libft.h 

# Flags del complilador
CFLAGS = -Wall -Wextra -Werror 

SRCS = ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_strlen ft_memset ft_bzero ft_memcpy ft_memmove ft_strlcpy ft_strlcat ft_toupper ft_tolower ft_strchr ft_strrchr ft_strncmp ft_memchr ft_memcmp ft_strnstr ft_atoi

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
