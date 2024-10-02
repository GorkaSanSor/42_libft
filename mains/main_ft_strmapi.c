#include "libft.h"
#include <stdio.h>

char to_upper(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int main(void)
{
	char *result = ft_strmapi("hola", to_upper);
	printf("Resultado: %s\n", result);
	free(result);
	return 0;
}
