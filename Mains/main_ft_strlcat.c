#include "libft.h"
#include <stdio.h>
#include <string.h>

int main (void)
{
	char src[] = "World!";
    char dst[50] = "Hello ";

	char src1[] = "Vietnam";
    char dst1[50] = "Goooooodmorning "; 

	char src2[] = "Hello, worldrgsergfsdth!";
    char dst2[50] = "Start"; 

	printf("Result: %lu\n", ft_strlcat(dst, src, sizeof(dst)));
	printf("DST = %s\n",dst);
	
	printf("Result: %lu\n", ft_strlcat(dst1, src1, sizeof(dst)));
	printf("DST = %s\n",dst1);

	printf("Result: %lu\n", ft_strlcat(dst2, src2, sizeof(dst)));
	printf("DST = %s\n",dst2);

	return (0);
}
