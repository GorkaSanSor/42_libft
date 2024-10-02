#include "libft.h"
#include <stdio.h>

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
}
