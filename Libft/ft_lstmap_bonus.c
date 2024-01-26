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

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;
	t_list	*new_node;
	void	*new_content;

	new_lst = NULL;
	new_node = NULL;
	new_content = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			del(new_content);
			ft_lstclear(&new_lst, del);
			return (NULL);
		}
		ft_lstadd_back(&new_lst, new_node);
		lst = lst->next;
	}
	return (new_lst);
}
/*
void *copy_content(void *content)
{
    char *original = (char *)content;
    char *copy = malloc(strlen(original) + 1);
    strcpy(copy, original);
    return copy;
}
*/
/*
int main(void)
{
    t_list *lst = ft_lstnew("Hello");
    lst->next = ft_lstnew("World");
    lst->next->next = ft_lstnew("Cruel");
    lst->next->next->next = ft_lstnew("!!!");
    lst->next->next->next->next = NULL;

    t_list *new_lst = ft_lstmap(lst, copy_content, free);

    while (new_lst)
    {
        printf("%s\n", (char *)new_lst->content);
        new_lst = new_lst->next;
    }

    ft_lstclear(&lst, free);
    ft_lstclear(&new_lst, free);

    return (0);
}

*/
