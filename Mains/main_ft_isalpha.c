#include "libft.h"
#include <stdio.h>
int main(void)
{
	// Prueba con diferentes caracteres
	char test_chars[] = {'A', 'z', '1', '@'};
	int i = 0;

	while (i < 4)
	{
		if (ft_isalpha(test_chars[i]))
			printf("El carácter '%c' es alfabético.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es alfabético.\n", test_chars[i]);
		i++;
	}
	return (0);
}
