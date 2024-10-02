#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *last_node;

	// Crear tres nodos
	node1 = ft_lstnew("Nodo 1");
	node2 = ft_lstnew("Nodo 2");
	node3 = ft_lstnew("Nodo 3");

	// Conectar los nodos
	node1->next = node2;
	node2->next = node3;

	// Obtener el último nodo
	last_node = ft_lstlast(node1);
	printf("Contenido del último nodo: %s\n", (char *)last_node->content);

	return (0);
}
