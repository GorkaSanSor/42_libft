#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char src[] = "Hello, World!";
	char dest[20];

	ft_memcpy(dest, src, 9);
	printf("Destino: %s\n", dest);

	return (0);
}
