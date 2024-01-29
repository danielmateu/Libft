/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:05:56 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/29 13:58:25 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion:
		Reserva (utilizando malloc(3)) un array de strings
		resultante de separar la string ’s’ en substrings
		utilizando el caracter ’c’ como delimitador. El
		array debe terminar con un puntero NULL.

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

static size_t count_words(char const *s, char c)
{
	size_t i;
	size_t j;
	char old;

	i = 0;
	j = 0;
	old = c;
	while (s[i])
	{
		if (old == c && s[i] != c)
		{
			j++;
		}
		old = s[i];
		i++;
	}
	return (j);
}

static char **freedom(char **tab, size_t pos)
{
	size_t i;

	i = 0;
	while (i < pos)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	char **res;
	size_t j;
	size_t k;

	i = 0;
	j = 0;
	k = 0;
	res = malloc(sizeof(char *) * (count_words(s, c) + 1));
	if (!res)
		return (NULL);
	while (s[i])
	{
		if (i > 0 && s[i] != c && s[i - 1] == c)
			k = i;
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
		{
			res[j++] = ft_substr(s, k, i - k + 1);
			if (!res[j - 1])
				return (freedom(res, j - 1));
		}
		i++;
	}
	res[j] = NULL;
	return (res);
}


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

