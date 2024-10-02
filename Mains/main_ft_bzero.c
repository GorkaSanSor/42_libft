#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char buffer[10] = "abcdefghi";

	ft_bzero(buffer, 5);
	int i = 0;
	while (i < 10)
	{
		if (buffer[i] == '\0')
			printf("0 "); // Imprime '0' para representar los caracteres nulos
		else
			printf("%c ", buffer[i]); // Imprime el resto de los caracteres
		i++;
	}
	return (0);
}
