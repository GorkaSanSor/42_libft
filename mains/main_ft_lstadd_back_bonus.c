#include "libft.h"
#include <stdio.h>

int main()
{
	// Crear una lista vacía
	t_list *list = NULL;

	// Crear algunos nodos
	t_list *node1 = ft_lstnew("Nodo 1");
	t_list *node2 = ft_lstnew("Nodo 2");
	t_list *node3 = ft_lstnew("Nodo 3");

	// Añadir nodos a la lista
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);

	// Imprimir los contenidos de la lista
	t_list *current = list;
	while (current)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}

	// Liberar memoria (opcional, pero recomendado)
	current = list;
	while (current)
	{
		t_list *next = current->next;
		free(current);
		current = next;
	}

	return 0;
}
