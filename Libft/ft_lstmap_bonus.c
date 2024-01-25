/*
    Descripcion: 
    Itera la lista 'lst' y aplica la funcion 'f' al contenido de cada elemento.
    Crea una nueva lista que resulta de las aplicaciones sucesivas de 'f'.
    La funcion 'del' se usa para borrar el contenido de un elemento si es
    necesario.

    Param. 
        #1: lst -> La direccion del puntero a un elemento.
        #2: f -> La direccion de una funcion usada para iterar sobre la lista.
        #3: del -> La direccion de una funcion usada para borrar el contenido
        de un elemento si es necesario.

    Return: La nueva lista. NULL si falla la asignacion de memoria.

    Libc functions: malloc(3), free(3).
*/

#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new;
    t_list *tmp;

    if (!lst || !f)
        return (NULL);
    new = NULL;
    while (lst)
    {
        tmp = ft_lstnew(f(lst->content));
        if (!tmp)
        {
            ft_lstclear(&new, del);
            return (NULL);
        }
        ft_lstadd_back(&new, tmp);
        lst = lst->next;
    }
    return (new);
}

int main(void)
{
    // Test para ft_lstmap
    t_list *lst;
    t_list *lst2;
    t_list *lst3;

    char *str1 = ft_strdup("Hola");
    char *str2 = ft_strdup("Mundo");
    char *str3 = ft_strdup("Cruel");

    lst = ft_lstnew(str1);
    lst2 = ft_lstnew(str2);
    lst3 = ft_lstnew(str3);

    // Mostrar los elementos de la lista
    printf("%s\n", lst->content);

    ft_lstmap(lst, free, free);

    // Imprimir los elementos de la lista
    printf("%s\n", lst->content);
    return (0);
}
