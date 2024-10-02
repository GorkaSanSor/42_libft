#include "libft.h"
#include <stdio.h>

int	main(void)
{
	const char haystack[] = "Hola, Mundo!";
	const char needle1[] = "Mundo";
	const char needle2[] = "Tierra";
	const char needle3[] = "";

	// Caso 1: Buscar "Mundo" en "Hola, Mundo!" (encontrado)
	printf("Caso 1: %s\n", ft_strnstr(haystack, needle1, 12));

	// Caso 2: Buscar "Tierra" en "Hola, Mundo!" (no encontrado)
	printf("Caso 2: %s\n", ft_strnstr(haystack, needle2, 12));

	// Caso 3: Buscar cadena vacía (debe retornar haystack)
	printf("Caso 3: %s\n", ft_strnstr(haystack, needle3, 12));

	// Caso 4: Buscar "Mundo" en los primeros 5 caracteres de 
	//"Hola, Mundo!" (no encontrado)
	printf("Caso 4: %s\n", ft_strnstr(haystack, needle1, 5));

	return (0);
}
