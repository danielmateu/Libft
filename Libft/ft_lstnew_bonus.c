/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:38:28 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/23 17:13:51 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Definicion de la funcion ft_lstnew:
    Reserva memoria (con malloc(3)) y devuelve un nuevo elemento.
    La variable ’content’ se inicializa mediante el valor del parámetro ’content’.
    La variable ’next’ se inicializa con NULL.
    Parametro content:
        El contenido del nuevo elemento.
    Valor de retorno:
        El nuevo elemento.
*/

#include "libft.h"

t_list *ft_lstnew(void *content)
{
    t_list *new;

    if (!(new = malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
/*
int main(void)
{
    // Test para comprobar uso de ft_lstnew
    char str[] = "Hola";
    t_list *new = ft_lstnew(str);
    printf("Test1: %s\n", new->content);

    // Test para comprobar uso de ft_lstnew
    char str2[] = "Mundo";
    t_list *new2 = ft_lstnew(str2);
    printf("Test2: %s\n", new2->content);
}
*/