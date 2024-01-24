/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 13:29:22 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/24 16:37:51 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion:
        Cuenta el numero de elementos de una lista
    Parametros:
        #1. lst -> El comienzo de la lista
    Return:
        El numero de elementos de la lista
*/

#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int i;

    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}
/*
int main(void)
{
    t_list *lst;
    t_list *lst2;
    t_list *lst3;

    lst = malloc(sizeof(t_list));
    lst2 = malloc(sizeof(t_list));
    lst3 = malloc(sizeof(t_list));
    lst->content = "Hola";
    lst2->content = "Mundo";
    lst3->content = "Cruel";
    lst->next = lst2;   
    lst2->next = lst3;
    lst3->next = NULL;
    printf("%d\n", ft_lstsize(lst));
    return (0);
}
*/