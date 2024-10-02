#include "libft.h"
include <stdio.h>

int main(void)
{
	char src[] = "Hello, World!";
	char dest[6];

	ft_strlcpy(dest, src, sizeof(dest));
	printf("Destino: %s\n", dest);  // Imprime "Hello"

	return (0);
}
