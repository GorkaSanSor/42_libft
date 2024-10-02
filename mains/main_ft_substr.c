#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char *str = "Hola, Mundo!";
	char *sub;

	// Extraer "Mundo" desde el índice 6, con longitud máxima de 5 caracteres
	sub = ft_substr(str, 6, 5);
	if (!sub)
	{
		printf("Error al extraer la subcadena.\n");
		return (1);
	}

	printf("Subcadena extraída: %s\n", sub);

	// Liberar la memoria asignada
	free(sub);

	return (0);
}
