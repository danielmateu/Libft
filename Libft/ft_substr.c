/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 17:19:37 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/29 12:58:23 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    Descripcion:
        Reserva memoria (con malloc(3)) y devuelve la 
        cadena de caracteres que resulta de la substracción de ’s’.
        El substring comienza en el índice ’start’ y 
        tiene como tamaño máximo ’len’.
    Parameters:
        #1. s: El string del que crear el substring.
        #2. start: El índice de inicio de la subcadena en la cadena "s".
        #3. len: La longitud maxima del substring.
    Return value:
        El substring. NULL si la asignacion falla.
    External functions:
        malloc
*/

// int	ft_strlen(const char *str)
// {
//     unsigned int	i;

//     i = 0;
//     while (str[i] != '\0')
//         i++;
//     return (i);
// }

char	*allocate_and_fill(const char *s, size_t start, size_t len)
{
	char	*str;
	size_t	i;

	i = 0;
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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*str;
	size_t	substr_len;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start > str_len)
	{
		str = (char *)malloc(sizeof(char));
		if (!str)
			return (NULL);
		str[0] = '\0';
		return (str);
	}
	substr_len = str_len - start;
	if (len > substr_len)
		len = substr_len;
	return (allocate_and_fill(s, start, len));
}
/*
int main(void){
    // Test 1
    char str[] = "Hello World";
    printf("Test1: %s\n", ft_substr(str, 6, 5));

    // Test 2
    char str2[] = "Hello World";
    printf("Test2: %s\n", ft_substr(str2, 6, 6));

    // Test 3
    char str3[] = "Hello World";
    printf("Test3: %s\n", ft_substr(str3, 6, 7));
}
*/
