/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 13:05:56 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/22 17:05:36 by damateu-         ###   ########.fr       */
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


int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}


char *allocate_and_fill(const char *s, size_t start, size_t len)
{
    char *str;
    size_t i = 0;

    str = (char *)malloc(sizeof(char) * (len + 1));
    if (!str)
        return (NULL);
    while (i < len && s[start + i])
    {
        str[i] = s[start + i];
        i++;
    }
    str[i] = '\0';
    return (str);
}

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    if (!s)
        return (NULL);
    size_t str_len = ft_strlen(s);
    if (start > str_len)
    {
        char *str = (char *)malloc(sizeof(char));
        if (!str)
            return (NULL);
        str[0] = '\0';
        return (str); 
    }
    size_t substr_len = str_len - start;
    if (len > substr_len)
        len = substr_len;
    return allocate_and_fill(s, start, len);
}


char	**ft_split(char const *s, char c)
{
	char	**strs;
	int		i;
	int		j;
	int		word_len;

	i = 0;
	j = 0;
	if (!s || !(strs = (char **)malloc(sizeof(char *) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		word_len = 0;
		while (s[i + word_len] && s[i + word_len] != c)
			word_len++;
		if (word_len)
		{
			strs[j] = ft_substr(s, i, word_len);
			j++;
			i += word_len;
		}
	}
	strs[j] = NULL;
	return (strs);
}
/*
int main(void)
{
	char	**strs;
	int		i;

	strs = ft_split("Menudo dolor de tarro", ' ');
	i = 0;
	while(strs[i])
	{
		printf("%s\n", strs[i]);
		i++;
	}
	return (0);
}
*/
