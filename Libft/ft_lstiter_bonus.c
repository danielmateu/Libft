/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:34:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/26 11:56:54 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion:
        Itera la lista ’lst’ y aplica la funcion ’f’ al contenido de cada elemento.

    Parametros:
        #1. La direccion del puntero a un elemento.
        #2. La direccion de la funcion que hay que aplicar.

    Valor de retorno:
        None
*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

int main(void)
{}