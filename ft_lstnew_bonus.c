/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 10:06:46 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:19:00 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

/*#include <stdio.h>

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
}*/