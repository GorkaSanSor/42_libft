#include "libft.h"
#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '0', '@', '5'};
	int i = 0;

	while (i < 5)
	{
		int converted = ft_tolower(test_chars[i]);
		printf("Original: '%c', Convertido: '%c'\n", test_chars[i], converted);
		i++;
	}
	return (0);
}
