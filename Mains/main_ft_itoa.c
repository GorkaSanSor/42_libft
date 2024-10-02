#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char *str;

	str = ft_itoa(-12345);
	printf("Resultado: %s\n", str);
	free(str);

	return (0);
}
