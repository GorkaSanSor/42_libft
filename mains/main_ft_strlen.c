#include "libft.h"
#include <stdio.h>

int main(void)
{
    const char *mensaje = "Hola, mundo!";
    int length = ft_strlen(mensaje);

    printf("La longitud de '%s' es: %d\n", mensaje, length);

    return 0;
}
