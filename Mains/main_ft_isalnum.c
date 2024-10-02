#include "libft.h"
#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '1', '@', '0', '5'};
	int i = 0;

	while (i < 6)
	{
		if (ft_isalnum(test_chars[i]))
			printf("El carácter '%c' es alfanumérico.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es alfanumérico.\n", test_chars[i]);
		i++;
	}
	return (0);
}
