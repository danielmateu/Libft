/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 12:16:48 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/26 16:59:58 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
	Descripcion: Comprueba si el caracter es una letra
	Parametros:
		- c: caracter a comprobar
	Retorno: 1 si es una letra, 0 si no lo es
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

/*
int main()
{
	char c = 'a';
	printf("%d", ft_isalpha(c));
	return (0);
}
*/
