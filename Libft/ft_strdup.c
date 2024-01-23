/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 12:36:04 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:55:57 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Definicion: Duplica una cadena de caracteres.
    Parametros: 
        - s1: Cadena de caracteres a duplicar.
    Retorno:
        - Cadena de caracteres duplicada.
*/

#include "libft.h"

/*
int	ft_strlen(const char *s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		i++;
	}
	return (i);
}
*/
char	*ft_strdup(const char *s1)
{
	char	*copy;
	int		i;

	i = 0;
	copy = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!copy)
		return (NULL);
	while (s1[i])
	{
		copy[i] = s1[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
/*
int	main(void)
{
	char *s1 = "Puto Dani";
	char *copy = "";
	copy = ft_strdup(s1);
	printf("%s\n", copy);
	return (0);
}
*/