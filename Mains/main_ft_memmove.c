#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";

	printf("Antes: %s\n", str);
	ft_memmove(str + 7, str, 5);  // Copia "Hello" a "World!"
	printf("Después: %s\n", str);

	return (0);
}
