/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 15:32:27 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/24 16:04:46 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: 
        Añade el elemento ’new’ al final de la lista.
    Parametros:
        #1. La direccion del puntero al primer elemento de la lista.
        #2. La direccion del puntero al elemento que hay que añadir a la lista.
    Valor de retorno:
        None
*/

#include "libft.h"
/*
// ft_lstnew
t_list *ft_lstnew(void *content)
{
    t_list *new;

    if (!(new = (t_list *)malloc(sizeof(t_list))))
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

//lstlast
t_list *ft_lstlast(t_list *lst)
{
    t_list *last;

    if (!lst)
        return (NULL);
    last = lst;
    while (last->next)
        last = last->next;
    return (last);
}
*/
void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *last;

    if (!lst || !new)
        return ;
    if (!*lst)
    {
        *lst = new;
        return ;
    }
    last = ft_lstlast(*lst);
    last->next = new;
}
/*
int main(void)
{
    t_list *lst;
    t_list *new;

    lst = ft_lstnew("first");
    new = ft_lstnew("second");
    ft_lstadd_back(&lst, new);
    printf("%s\n", lst->next->content);
    return (0);
}
*/