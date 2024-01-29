/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:16:30 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/29 15:44:45 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion:   
        Libera la memoria del elemento pasado como argumento usando la funcion
        ’del’ y despues libera el elemento.
    Parametros:
        #1. El elemento a liberar.
        #2. La direccion de una funcion usada para borrar el contenido del
        elemento.
    Valor de retorno:
        None
    Funciones externas autorizadas:
        free
*/

#include "libft.h"

//lst_new crea un nuevo elemento de la lista
/*
t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = (t_list *)malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}
*/

void    ft_lstdelone(t_list *lst, void (*del)(void*))
{
    if (lst)
    {
        del(lst->content);
        free(lst);
    }
}

// Funcion main para testear la funcion

int main(void) {
    t_list *lst;
    char *str;

    str = malloc(5 * sizeof(char));  // Allocate memory for the string
    if (str == NULL) {
        // Handle the error
        return (1);
    }
    strcpy(str, "Hola");  // Copy the string into the allocated memory

    lst = ft_lstnew(str);
    // Mostrar el contenido de lst
    printf("%s\n", lst->content);
    ft_lstdelone(lst, free);
    // Mostrar el contenido de lst
    printf("%s\n", lst->content);
    return (0);
}
