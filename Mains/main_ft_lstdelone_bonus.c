#include "libft.h"
#include <stdio.h>

void del(void *content)
{
	free(content);
}

int main(void)
{
	t_list *node;

	node = ft_lstnew(ft_strdup("Hola, Mundo!"));
	
	ft_lstdelone(node, del);

	return (0);
}
