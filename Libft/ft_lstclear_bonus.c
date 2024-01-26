/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:42:28 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/26 11:34:30 by damateu-         ###   ########.fr       */
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

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    if (!lst || !del)
        return;
    while (*lst)
    {
        tmp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = tmp;
    }
    *lst = NULL;
}

int main()
{
    /*
    ** 1. Crear una lista con 3 nodos
    */
    t_list *lst;
    t_list *lst2;
    t_list *lst3;

    /*
    ** 2. Crear 3 strings para los nodos
    */
    char *str1 = ft_strdup("Hola");
    char *str2 = ft_strdup("Mundo");
    char *str3 = ft_strdup("Cruel");

    /*
    ** 3. Crear los nodos con los strings
    */
    lst = ft_lstnew(str1);
    lst2 = ft_lstnew(str2);
    lst3 = ft_lstnew(str3);

    /*
    ** 4. Asignar el nodo 2 al nodo 1
    */
    lst->next = lst2;

    /*
    ** 5. Asignar el nodo 3 al nodo 2
    */
    lst2->next = lst3;

    // Mostrar el tamaño de la lista
    printf("Tamaño de la lista: %d\n", ft_lstsize(lst));

    /*
    ** 7. Borrar la lista
    */
    ft_lstclear(&lst, free);

    /*
    ** 8. Mostrar el tamaño de la lista
    */
    printf("Tamaño de la lista: %d\n", ft_lstsize(lst));
    return (0);
}