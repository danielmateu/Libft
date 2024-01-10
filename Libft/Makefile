# Nombre del archivo de la biblioteca
NAME = libft.a 

# Archivo de cabecera
INCL = libft.h 

# Flags del complilador
CFLAGS = -Wall -Wextra -Werror 

# SRC = ft_isalpha.c ft_isalnum.c ft_isdigit.c ft_isascii.c ft_isprint.c ft_strlen.c ft_toupper.c ft_tolower.c ft_strchr.c
# incluir en SRC los archivos .c que se quieran compilar que empiecen con ft_
SRC = $(wildcard ft_*.c)
# wildcard es una funcion que busca todos los archivos que empiecen con ft_ y terminen con .c

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

# Regla para crear los archivos objeto. El % es un operador de sustitucion de patron. A partir de un archivo .c se crea un archivo .o
# $< es el primer archivo de la lista de dependencias y $@ es el archivo objetivo
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
