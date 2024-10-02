#include "libft.h"
#include <stdio.h>

int main(void)
{
	t_list *head;
	t_list *node1;
	t_list *new_node;

	// Crear dos nodos
	node1 = ft_lstnew("Nodo 1");
	new_node = ft_lstnew("Nuevo Nodo");

	// Inicialmente, head apunta al primer nodo
	head = node1;

	// Agregar el nuevo nodo al frente
	ft_lstadd_front(&head, new_node);

	// Imprimir el contenido del primer nodo (debe ser "Nuevo Nodo")
	printf("Contenido del primer nodo: %s\n", (char *)head->content);

	return (0);
}
