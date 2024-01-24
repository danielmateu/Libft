/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 11:52:15 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/24 12:02:41 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion: Agrega el elemento ’new’ al principio de la lista.
    Parametros: #1. lst -> La direccion del puntero al primer elemento de la lista.
                #2. new -> La direccion del puntero al elemento que hay que agregar a la lista.
    Return: nada.
*/

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    if (lst && new)
    {
        new->next = *lst;
        *lst = new;
    }
}

/*
    Linea 1: Verifica que lst y new no sean NULL.
    Linea 3: El puntero next de new apunta a la direccion de lst.
    Linea 4: El puntero lst apunta a la direccion de new.
*/
/*
int main()
{
    t_list *lst;
    t_list *new;
    t_list *new2;

    lst = malloc(sizeof(t_list));
    new = malloc(sizeof(t_list));
    new2 = malloc(sizeof(t_list));
    lst->content = "Hola";
    lst->next = NULL;
    new->content = "Mundo";
    new->next = NULL;
    new2->content = "Cruel";
    new2->next = NULL;
    ft_lstadd_front(&lst, new);
    ft_lstadd_front(&lst, new2);
    printf("%s\n", lst->content);
    printf("%s\n", lst->next->content);
    printf("%s\n", lst->next->next->content);
    return (0);
}
*/