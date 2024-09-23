/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 13:12:28 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:17:52 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total_size;

	total_size = count * size;
	if (total_size == 0)
		return (malloc(0));
	ptr = malloc(total_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

/*#include <stdio.h>

int	main(void)
{
	int *arr;
	size_t count = 5;
	size_t size = sizeof(int);

	// Usar ft_calloc para asignar memoria para 5 enteros
	arr = (int *)ft_calloc(count, size);
	if (!arr)
	{
		printf("Error en la asignación de memoria.\n");
		return (1);
	}

	// Verificar que los valores están inicializados a 0
	for (size_t i = 0; i < count; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);

	// Liberar la memoria asignada
	free(arr);
	return (0);
}*/