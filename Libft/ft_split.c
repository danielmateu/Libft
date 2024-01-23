/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:05:56 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:20:18 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion:
		Reserva memoria (con malloc(3)) y devuelve la cadena de caracteres
		que resulta de la separación de ’s’ usando el carácter ’c’ como
		delimitador. La tabla de cadenas debe terminar con un puntero NULL.

		Param. #1:
			La cadena de la que hay que extraer las cadenas.
		Param. #2:
			El carácter delimitador.
		Return value:
			La tabla de cadenas resultante de la separación.
		Funciones externas autorizadas:
			malloc

*/

#include "libft.h"

static size_t	contarpalabras(char const *s, char c)
{
	size_t	i;
	size_t	cont;
	char	old;

	cont = 0;
	i = 0;
	old = c;
	while (s[i])
	{
		if (old == c && s[i] != c)
		{
			cont++;
		}
		old = s[i];
		i++;
	}
	return (cont);
}

static char	**liberar(char **tab, size_t pos)
{
	size_t	i;

	i = 0;
	while (i < pos)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	char	**resultado;
	size_t	posicion;
	size_t	inicio;

	i = 0;
	posicion = 0;
	inicio = 0;
	resultado = malloc(sizeof(char *) * (contarpalabras(s, c) + 1));
	if (!resultado)
		return (NULL);
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			inicio = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			resultado[posicion++] = ft_substr(s, inicio, i - inicio + 1);
			if (!resultado[posicion - 1])
				return (liberar(resultado, posicion - 1));
		}
		i++;
	}
	resultado[posicion] = NULL;
	return (resultado);
}

/*
int main(void)
{
	char **strs;
	int i;

	strs = ft_split("Menudo dolor de tarro", ' ');
	if (strs == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (strs[i] != NULL)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	printf("Allocated size: %d\n", i);
	return (0);
}
*/
