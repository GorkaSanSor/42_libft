#include "libft.h"
#include <stdio.h>

int main(void)
{
	const char *str = "Hello, World!";
	char search = 'o';
	char *result = ft_strchr(str, search);

	if (result)
		printf("El texto a partir del carácter '%c' es: %s\n", search, result);
	else
		printf("Carácter '%c' no encontrado.\n", search);

	return (0);
}
