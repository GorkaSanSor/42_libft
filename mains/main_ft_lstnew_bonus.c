#include "libft.h"
#include <stdio.h>

int main(void)
{
	char *content = "Contenido del nodo";
	t_list *new_node;

	new_node = ft_lstnew(content);
	if (new_node)
	{
		printf("Nodo creado con contenido: %s\n", (char *)new_node->content);
		free(new_node);  // Liberar la memoria asignada
	}
	return (0);
}
