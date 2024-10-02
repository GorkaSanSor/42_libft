#include "libft.h"
#include <stdio.h>

// Función que imprime una cadena
void print_content(void *content)
{
	printf("%s\n", (char *)content);
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

	// Aplicar ft_lstiter para imprimir el contenido de cada nodo
	ft_lstiter(node1, print_content);

	return (0);
}
