/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:24:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 14:40:20 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
    Descripcion: Convierte un entero a una cadena de caracteres
    Parametros:
        - n: entero a convertir
    Retorno: cadena de caracteres

    Diferencia con atoi: atoi convierte una cadena de caracteres a un entero
    
*/

int	calculate_sign(int n)
{
	int	sign;

	if (n < 0)
		sign = -1;
	else
		sign = 1;
	return (sign);
}

int	calculate_len(int n)
{
	int	len;

	if (n <= 0)
		len = 1;
	else
		len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	int		sign;
	char	*str;

	sign = calculate_sign(n);
	num = (long)n * sign;
	len = calculate_len(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len--)
	{
		str[len] = num % 10 + '0';
		num /= 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
/*
int main(void)
{
    int n = -2147483648;
    int n2 = 2147483647;
    int n3 = 0;
    int n4 = 9;
    printf("%s\n", ft_itoa(n));
    printf("%s\n", ft_itoa(n2));
    printf("%s\n", ft_itoa(n3));
    printf("%s\n", ft_itoa(n4));
    return (0);
}
*/
