/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gsantill <gsantill@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 13:11:13 by gsantill          #+#    #+#             */
/*   Updated: 2024/09/20 16:17:45 by gsantill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *dest, size_t n)
{
	ft_memset(dest, 0, n);
}

/*#include <stdio.h>

int	main(void)
{
	char buffer[10] = "abcdefghi";

	ft_bzero(buffer, 5);
	int i = 0;
	while (i < 10)
	{
		if (buffer[i] == '\0')
			printf("0 "); // Imprime '0' para representar los caracteres nulos
		else
			printf("%c ", buffer[i]); // Imprime el resto de los caracteres
		i++;
	}
	return (0);
}*/