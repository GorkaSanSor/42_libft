#include "libft.h"
#include <stdio.h>

int main(void)
{
	char buffer[10];

	ft_memset(buffer, 'A', 10);

	for (int i = 0; i < 10; i++)
		printf("%c ", buffer[i]);
	printf("\n");

	return 0;
}
