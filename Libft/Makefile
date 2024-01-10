# Nombre del archivo de la biblioteca
NAME = libft.a 

# Archivo de cabecera
INCL = libft.h 

# Flags del complilador
CFLAGS = -Wall -Wextra -Werror 

SRC = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c

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

# Regla para compilar solo los archivos modificados
recompile: 
	make -C . -j
# Reglas que no son archivos
.PHONY: all clean fclean re 
