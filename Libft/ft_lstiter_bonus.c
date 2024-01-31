/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damateu- <damateu-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 16:34:50 by damateu-          #+#    #+#             */
/*   Updated: 2024/01/31 10:56:07 by damateu-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
    Descripcion:
        Itera la lista ’lst’ y aplica la funcion ’f’ al contenido de cada elemento.

    Parametros:
        #1. La direccion del puntero a un elemento.
        #2. La direccion de la funcion que hay que aplicar!

    Valor de retorno:
        None
*/

#include "libft.h"

void ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

//ft_lstprint para testear ft_lstiter
void ft_lstprint(void *content)
{
    ft_putstr_fd(content, 1);
    ft_putchar_fd('\n', 1);
}

//main para testear ft_lstiter 
int main(void)
{
    t_list *lst;
    t_list *lst2;
    t_list *lst3;

    lst = ft_lstnew("Hola");
    lst2 = ft_lstnew("que");
    lst3 = ft_lstnew("tal");
    lst->next = lst2;
    lst2->next = lst3;
    ft_lstiter(lst, &ft_lstprint);//
    return (0);
}
