/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 09:28:41 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 09:40:58 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n > 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
}
/*int main(void)
{
	ft_putnbr_fd(12345, 1);  // Escribe en la salida estándar (consola)
	ft_putchar_fd('\n', 1);  // Escribe un salto de línea
	ft_putnbr_fd(-6789, 1);  // Escribe un número negativo en la consola
	ft_putchar_fd('\n', 1);  // Escribe un salto de línea
	return (0);
}*/