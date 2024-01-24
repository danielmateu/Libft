/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 14:43:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/24 14:45:53 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: Devuelve el ultimo elemento de la lista.
    Parametros: #1. El comienzo de la lista.
    Return value: El ultimo elemento de la lista.
*/

#include "libft.h"

t_list *ft_lstlast(t_list *lst)
{
    t_list *last;

    last = lst;
    if (last)
    {
        while (last->next)
            last = last->next;
    }
    return (last);
}

int main(void)
{
    t_list *lst;
    t_list *last;

    lst = ft_lstnew("Hola");
    lst->next = ft_lstnew("Mundo");
    lst->next->next = ft_lstnew("Cruel");
    lst->next->next->next = ft_lstnew("!");
    last = ft_lstlast(lst);
    printf("%s\n", last->content);
    return (0);
}