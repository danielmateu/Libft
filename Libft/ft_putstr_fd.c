/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 14:22:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 15:20:09 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Descripcion: Escribe la cadena de caracteres s sobre 
el descriptor de fichero fd.
** Return value: None
** Parametros: #1. La cadena de caracteres a escribir.
** #2. El descriptor de fichero.
** External functs: write
*/

#include "libft.h"
/*
int	ft_strlen(const char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
void	ft_putstr_fd(char *s, int fd)
{
	write(fd, s, ft_strlen(s));
}
/*
int	main(void)
{
	ft_putstr_fd("Hola mundo", 1);
	return (0);
}
*/