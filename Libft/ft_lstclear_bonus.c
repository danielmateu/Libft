/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:42:28 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/24 16:45:08 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: Borra y libera la memoria de un elemento y todos los que le 
    siguen, usando la funcion 'del' y free(3). 
    Por ultimo, el puntero inicial debe ser establecido en NULL.

    Param. #1: La direccion del puntero a un elemento.
    Param. #2: La direccion de una funcion usada para borrar el contenido de un
    elemento.

    Valor de retorno: None.

    Funciones externas autorizadas: free(3).
*/

#include "libft.h"

void    ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list *tmp;

    if (!lst || !del)
        return ;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    *lst = NULL;
}