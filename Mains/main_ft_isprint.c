#include "libft.h"
#include <stdio.h>

int main(void)
{
	char test_chars[] = {'A', 'z', '1', '@', '0', '5', 128};
	int i = 0;

	while (i < 7)
	{
		if (ft_isprint(test_chars[i]))
			printf("El carácter '%c' es imprimible.\n", test_chars[i]);
		else
			printf("El carácter '%c' no es imprimible.\n", test_chars[i]);
		i++;
	}
	return (0);
}
