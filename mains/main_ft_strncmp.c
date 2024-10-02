#include "libft.h"
#include <stdio.h>

int main(void)
{
	char str1[] = "Hello";
	char str2[] = "Hello";
	char str3[] = "Hellz";
	char str4[] = "Hel";
	unsigned int n = 4;

	printf("'Hello' y 'Hello' 4 carac.: %d\n", ft_strncmp(str1, str2, n));
	printf("'Hello' y 'Hellz' 4 carac.: %d\n", ft_strncmp(str1, str3, n));
	printf("'Hello' y 'Hel' 4 carac.: %d\n", ft_strncmp(str1, str4, n));
	printf("'Hello' y 'Hellz' 5 carac.: %d\n", ft_strncmp(str1, str3, 5));

	return (0);
}
