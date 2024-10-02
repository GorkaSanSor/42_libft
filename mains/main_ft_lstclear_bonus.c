#include "libft.h"
#include <stdio.h>

void del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	// Crear tres nodos
	node1 = ft_lstnew(ft_strdup("Nodo 1"));
	node2 = ft_lstnew(ft_strdup("Nodo 2"));
	node3 = ft_lstnew(ft_strdup("Nodo 3"));

	// Conectar los nodos
	node1->next = node2;
	node2->next = node3;

	// Eliminar toda la lista
	ft_lstclear(&node1, del);

	// Verificar si la lista está vacía (node1 debe ser NULL)
	if (node1 == NULL)
		printf("La lista ha sido eliminada completamente.\n");

	return (0);
}
