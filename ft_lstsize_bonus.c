/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 11:48:59 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:19:07 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_lstsize(t_list *lst)
{
	int	count;

	count = 0;
	while (lst)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

/*#include <stdio.h>

int main(void)
{
	t_list *node1;
	t_list *node2;
	t_list *node3;

	// Crear tres nodos
	node1 = ft_lstnew("Nodo 1");
	node2 = ft_lstnew("Nodo 2");
	node3 = ft_lstnew("Nodo 3");

	// Conectar los nodos
	node1->next = node2;
	node2->next = node3;

	// Obtener el tamaño de la lista
	printf("Tamaño de la lista: %d\n", ft_lstsize(node1));  // Debe imprimir 3

	return (0);
}*/