#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char **result;
	size_t i;

	const char *str = "Hola  Mundo  42  ";
	char delim = ' ';

	result = ft_split(str, delim);
	if (!result)
	{
		printf("Error al dividir la cadena.\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Subcadena %zu: '%s'\n", i, result[i]);
		free(result[i]);  // Liberar cada subcadena
		i++;
	}
	free(result);  // Liberar el arreglo de subcadenas

	return (0);
}
