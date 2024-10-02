#include "libft.h"
#include <stdio.h>

void to_upper_iter(unsigned int i, char *c)
{
	(void)i;
    if (*c >= 'a' && *c <= 'z')
        *c = *c - 32;
}

int main(void)
{
    char str[] = "hola, mundo!";
    ft_striteri(str, to_upper_iter);
    printf("Cadena modificada: %s\n", str);
    return 0;
}
