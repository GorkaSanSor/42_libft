#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *str = "   Hola, Mundo!   ";
	const char *set = " ";

	char *trimmed_str = ft_strtrim(str, set);
	if (!trimmed_str)
	{
		printf("Error al recortar la cadena.\n");
		return (1);
	}

	printf("Cadena original: '%s'\n", str);
	printf("Cadena recortada: '%s'\n", trimmed_str);

	free(trimmed_str);

	return (0);
}
