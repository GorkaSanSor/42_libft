#include "libft.h"
#include <stdio.h>

int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '0', '@', '5'};
	int i = 0;

	while (i < 5)
	{
		if (ft_isdigit(test_chars[i]))
			printf("El carácter '%c' es numerico.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es numerico.\n", test_chars[i]);
		i++;
	}
	return (0);
}
