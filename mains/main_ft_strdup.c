#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *str = "Hola, Mundo!";
	char *dup_str;

	dup_str = ft_strdup(str);
	if (!dup_str)
	{
		printf("Error en la duplicación de la cadena.\n");
		return (1);
	}

	printf("Cadena original: %s\n", str);
	printf("Cadena duplicada: %s\n", dup_str);

	// Liberar la memoria asignada
	free(dup_str);

	return (0);
}
