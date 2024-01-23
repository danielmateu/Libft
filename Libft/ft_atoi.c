/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:23:54 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:25:12 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Definicion de la funcion atoi:
    La función atoi convierte el argumento str a un entero (de tipo int).
    Parametro str:
        Esta es la cadena que se convertirá en un entero.
    Valor de retorno:
        Esta función devuelve el valor convertido como un int.
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
/*
int main(void)
{
    // Test para comprobar uso de ft_atoi
    char str[] = "   -123456789";
    printf("Test1: %d\n", ft_atoi(str));

    // Test para comprobar uso de atoi
    char str2[] = "   123456789";
    printf("Test2: %d\n", atoi(str2));

    // Test para comprobar uso de atoi
    char str3[] = "abceder";
    printf("Test3: %d\n", atoi(str3));
}
*/