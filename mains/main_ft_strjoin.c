#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *str1 = "Hola, ";
	const char *str2 = "Mundo!";
	char *joined_str;

	// Concatenar las dos cadenas
	joined_str = ft_strjoin(str1, str2);
	if (!joined_str)
	{
		printf("Error al concatenar las cadenas.\n");
		return (1);
	}

	printf("Cadena concatenada: %s\n", joined_str);

	// Liberar la memoria asignada
	free(joined_str);

	return (0);
}
