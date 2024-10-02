#include "libft.h"
#include <stdio.h>
#include <string.h>

// Función para duplicar el contenido del nodo
void *duplicate_content(void *content)
{
	return (ft_strdup((char *)content));
}

// Función para liberar el contenido del nodo
void del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;
	t_list *new_list;

	// Crear tres nodos
	node1 = ft_lstnew(ft_strdup("Nodo 1"));
	node2 = ft_lstnew(ft_strdup("Nodo 2"));
	node3 = ft_lstnew(ft_strdup("Nodo 3"));

	// Conectar los nodos
	node1->next = node2;
	node2->next = node3;

	// Crear una nueva lista aplicando la función 'duplicate_content'
	new_list = ft_lstmap(node1, duplicate_content, del);

	// Imprimir los contenidos de la nueva lista
	t_list *temp = new_list;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}

	// Liberar la memoria de ambas listas
	ft_lstclear(&new_list, del);
	ft_lstclear(&node1, del);

	return (0);
}
