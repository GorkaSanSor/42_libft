#include "libft.h"

int main(void)
{
	ft_putnbr_fd(12345, 1);  // Escribe en la salida estándar (consola)
	ft_putchar_fd('\n', 1);  // Escribe un salto de línea
	ft_putnbr_fd(-6789, 1);  // Escribe un número negativo en la consola
	ft_putchar_fd('\n', 1);  // Escribe un salto de línea
	return (0);
}
